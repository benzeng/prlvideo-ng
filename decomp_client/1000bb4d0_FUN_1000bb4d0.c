
int FUN_1000bb4d0(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  CVmTools local_180 [360];
  
  CVmTools::CVmTools(local_180);
  cVar1 = FUN_1000bc260(param_1,local_180);
  iVar4 = -2;
  if (cVar1 != '\0') {
    CVmTools::getVmSharing();
    bVar2 = (bool)CVmSharing::getGuestSharing();
    CVmGuestSharing::setEnabled(bVar2);
    bVar3 = FUN_1000bc2d0(param_1,local_180);
    iVar4 = (uint)bVar3 * 5 + -2;
  }
  CVmTools::~CVmTools(local_180);
  return iVar4;
}

