
void FUN_10071c540(long param_1,QString *param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  
  cVar1 = FUN_10071c5d0();
  if ((param_4 == 0x16) && (cVar1 != '\x01')) {
    FUN_100df99c0("","prl_client_app",0,
                  "onKeyboardGrabStateChanged with CoherenceReason recieved not in coherence mode");
    return;
  }
  QString::operator=((QString *)(param_1 + 0x18),param_2);
  FUN_10071c800(param_1);
  FUN_10071ce70(param_1);
  FUN_10071d3e0(param_1);
  FUN_10071dc30(param_1);
  FUN_10071de90(param_1);
  return;
}

