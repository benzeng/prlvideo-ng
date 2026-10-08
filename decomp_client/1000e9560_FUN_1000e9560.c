
undefined1 FUN_1000e9560(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined1 local_70 [32];
  QArrayData *local_50;
  undefined1 local_48 [32];
  undefined4 local_28;
  undefined1 local_21;
  
  iVar2 = FUN_100a67f70(local_70,0x14);
  if (iVar2 != 0) {
    return 0;
  }
  local_28 = param_3;
  iVar2 = FUN_100a67f70(local_48,0);
  if (iVar2 != 0) {
    uVar1 = 0;
    goto LAB_1000e96b1;
  }
  QString::toUtf8();
  iVar2 = FUN_100a68060(local_48,&local_28,4,0x201f);
  if (iVar2 == 0) {
    iVar2 = FUN_100a68060(local_48,local_50 + *(long *)(local_50 + 0x10),
                          *(undefined4 *)(local_50 + 4),0x2020);
    if (iVar2 == 0) {
      uVar4 = FUN_100a67f30(local_48);
      uVar3 = FUN_100a67f40(local_48);
      iVar2 = FUN_100a68060(local_70,uVar4,uVar3,0x201e);
      bVar6 = iVar2 == 0;
    }
    else {
      bVar6 = false;
    }
  }
  else {
    bVar6 = false;
  }
  FUN_100a681d0(local_48);
  if (*(int *)local_50 == -1) {
LAB_1000e9649:
    if (!bVar6) {
      uVar1 = 0;
      goto LAB_1000e96b1;
    }
  }
  else {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000e9649;
    }
    QArrayData::deallocate(local_50,1,8);
    if (!bVar6) {
      uVar1 = 0;
      goto LAB_1000e96b1;
    }
  }
  puVar5 = (undefined4 *)FUN_100a67f30(local_70);
  *puVar5 = 0x88;
  iVar2 = FUN_100a67f40(local_70);
  puVar5[4] = iVar2 + -0x14;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[1] = 2;
  uVar1 = FUN_1000e85b0(param_1,puVar5);
LAB_1000e96b1:
  FUN_100a681d0(local_70);
  return uVar1;
}

