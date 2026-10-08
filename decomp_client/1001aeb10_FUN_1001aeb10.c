
bool FUN_1001aeb10(undefined8 param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  QArrayData *local_30;
  char local_23;
  undefined1 local_22;
  
  sVar1 = FUN_1001ae710(param_1,&local_23);
  bVar3 = false;
  if ((sVar1 == 0x5ac) && (bVar3 = false, local_23 != '\0')) {
    sVar1 = FUN_1001ae870(param_1,0);
    bVar3 = true;
    if (0x1e < (ushort)(sVar1 + 0x7dffU)) {
      local_30 = (QArrayData *)QString::fromAscii_helper("Bluetooth USB Host Controller",0x1d);
      iVar2 = QString::indexOf(param_2,&local_30,0,1);
      bVar3 = iVar2 != -1;
      if (*(int *)local_30 != -1) {
        if (*(int *)local_30 != 0) {
          LOCK();
          *(int *)local_30 = *(int *)local_30 + -1;
          UNLOCK();
          if (*(int *)local_30 != 0) {
            return bVar3;
          }
          local_22 = 0;
        }
        QArrayData::deallocate(local_30,2,8);
      }
    }
  }
  return bVar3;
}

