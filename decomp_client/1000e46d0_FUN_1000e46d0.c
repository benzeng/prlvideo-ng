
void FUN_1000e46d0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QArrayData *local_28;
  int local_20;
  undefined1 local_1a;
  
  uVar3 = FUN_100152280();
  uVar3 = FUN_1001548f0(uVar3,param_1 + 0x10);
  uVar4 = FUN_10018d490(uVar3);
  cVar1 = FUN_1001754c0(uVar4,0x12);
  local_20 = 0;
  if (cVar1 != '\0') {
    iVar2 = FUN_1001902a0(uVar3);
    local_20 = iVar2;
    if (iVar2 < 0xb4d747) {
      if (iVar2 == 0x5aa3ff) {
        local_20 = -0xbe551d;
      }
      else if (iVar2 == 0x808080) {
        local_20 = -0x6a6a68;
      }
    }
    else if (iVar2 < 0xc08ed8) {
      if (iVar2 == 0xb4d747) {
        local_20 = -0x9d45b7;
      }
    }
    else if (iVar2 < 0xf6aa44) {
      if (iVar2 == 0xc08ed8) {
        local_20 = -0x3f832f;
      }
      else if (iVar2 == 0xefdb47) {
        local_20 = -0x1941b9;
      }
    }
    else {
      local_20 = -0xba4a8;
      if ((iVar2 != 0xfa645a) && (local_20 = iVar2, iVar2 == 0xf6aa44)) {
        local_20 = -0x1567bf;
      }
    }
  }
  QByteArray::QByteArray((QByteArray *)&local_28,(char *)&local_20,4);
  FUN_1000d75c0(param_1,0x95,(QByteArray *)&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return;
}

