
void FUN_1003f94a0(long param_1)

{
  byte bVar1;
  int iVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)QString::fromAscii_helper("Hardware.CdRom[",0xf);
  iVar2 = QString::indexOf(param_1 + 0x30,&local_30,0,1);
  bVar1 = 1;
  if (iVar2 != -1) {
    local_38 = (QArrayData *)QString::fromAscii_helper(".InterfaceType",0xe);
    bVar1 = QString::endsWith(param_1 + 0x30,&local_38,1);
    bVar1 = bVar1 ^ 1;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_21 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1003f953e;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_1003f953e:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003f956e;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003f956e:
  if (bVar1 == 0) {
    FUN_1003f1760(param_1);
  }
  return;
}

