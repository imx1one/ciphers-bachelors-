class EncryptData:
    def __init__(self, a, b, g, p):
        self.a = a
        self.b = b
        self.g = g
        self.p = p
    def powmod(self, base, exp, module):
        res = 1
        base  = base % module
        while exp > 0:
            if exp % 2 == 1:
                res = (res * base)% module
            exp = exp >> 1
            base = (base * base) % module
        return res
    def A(self):
        return self.powmod(self.g, self.a, self.p)
    def B(self):
        return self.powmod(self.g, self.b, self.p)
    def s1(self):
        B = self.B()
        return self.powmod(B, self.a, self.p)
    def s2(self):
        A = self.A()
        return self.powmod(A, self.b, self.p)

encrptdata = EncryptData(6, 9, 5, 23)
print(encrptdata.A())
print(encrptdata.B())
print(encrptdata.s1())
print(encrptdata.s2())
    
