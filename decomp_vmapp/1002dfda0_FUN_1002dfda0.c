
undefined8 FUN_1002dfda0(long param_1)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  QString *pQVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar5 = FUN_1002df780();
  if ((int)uVar5 < 0) {
    return uVar5;
  }
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"Usb virtual mouse constructed");
  }
  local_4c = 0x409;
  uVar5 = FUN_1002e4d40(param_1 + 0x30,&local_4c);
  local_50 = 4;
  pQVar6 = (QString *)FUN_1002e4ea0(uVar5,&local_50);
  QString::fromUtf8_helper((char *)&local_48,0xa1c5ff);
  QString::operator=(pQVar6,&local_48);
  piVar2 = (int *)CONCAT71(local_48.field0_0x0._1_7_,local_48.field0_0x0._0_1_);
  if (*piVar2 != -1) {
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_31 = *piVar2 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002dfe6b;
    }
    QArrayData::deallocate
              ((QArrayData *)CONCAT71(local_48.field0_0x0._1_7_,local_48.field0_0x0._0_1_),2,8);
  }
LAB_1002dfe6b:
  local_54 = 0x409;
  uVar5 = FUN_1002e4d40(param_1 + 0x30,&local_54);
  local_58 = 5;
  pQVar6 = (QString *)FUN_1002e4ea0(uVar5,&local_58);
  QString::fromUtf8_helper((char *)&local_40,0xa1c61d);
  QString::operator=(pQVar6,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_48.field0_0x0._0_1_ = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_48.field0_0x0._0_1_) goto LAB_1002dfee7;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1002dfee7:
  uVar3 = FUN_1007109e0();
  iVar4 = FUN_1007da300("devices.usb.mouse.fastpoll",0xa0bff < uVar3);
  if ((iVar4 != 0) && (*(char *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4) != '\0')) {
    lVar9 = 0;
    lVar8 = 0x21;
    do {
      iVar4 = FUN_1002d6ce0(*(undefined8 *)(param_1 + 8));
      lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 0x10);
      uVar7 = 4;
      if (iVar4 != 2) {
        uVar7 = 1;
      }
      *(undefined1 *)(lVar1 + lVar8) = uVar7;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x19;
    } while (lVar9 < (long)(ulong)*(byte *)(lVar1 + 4));
  }
  return 0;
}

