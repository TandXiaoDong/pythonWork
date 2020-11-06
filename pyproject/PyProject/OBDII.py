from FaultSetApi import FaultSet

class OBDII():
    def __init__(self):
        self.CAN=FaultSet()
    def Mode1Req(self):
        return self.CAN.ReadResultMode1()
    def Mode3Req(self):
        return self.CAN.ReadResultMode3()
    def Mode4Req(self):
        return self.CAN.ReadResultMode4()
    def Mode7Req(self):
        return self.CAN.ReadResultMode7()
    def Mode9Req(self):
        return self.CAN.ReadResultMode9()
    def ModeAReq(self):
        return self.CAN.ReadResultModeA()
    def ClearFIU(self):
        return self.CAN.ClearFault()
    def OBDGetEnginSpeed(self):
        return self.CAN.OBDGetEnginSpeed()
    def OBDGetCarSpeed(self):
        return self.CAN.OBDGetCarSpeed()
    def OBDGetEnginLoade(self):
        return self.CAN.OBDGetEnginLoade()
    def OBDGetEnginTemperature(self):
        return self.CAN.OBDGetEnginTemperature()

