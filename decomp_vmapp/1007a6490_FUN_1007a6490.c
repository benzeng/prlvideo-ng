
undefined1 FUN_1007a6490(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  QArrayData *pQVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  QArrayData *local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar4 = 0;
    goto LAB_1007a65ef;
  }
  if (*(int *)(param_1 + 0x34) != 1) {
    uVar4 = 0;
    goto LAB_1007a65ef;
  }
  uVar5 = 0;
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10);
  }
  FUN_1007d6920(local_48,uVar5);
  cVar3 = FUN_1007ea210(local_48);
  if (cVar3 == '\0') {
    cVar3 = FUN_1007a4d40(param_1,param_2,param_3);
    if (cVar3 == '\0') {
      uVar4 = 0;
    }
    else {
      FUN_1007ea6d0(local_48,local_58);
      uVar4 = FUN_1007a5aa0(param_1,param_2,param_3,0xb);
    }
    goto LAB_1007a65ef;
  }
  pQVar2 = *(QArrayData **)(param_1 + 0x18);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","IOCommunication",0,"%sProxy peer handle is invalid!",
                local_68 + *(long *)(local_68 + 0x10));
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) goto LAB_1007a6577;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1007a6577:
  if (*(int *)pQVar2 == -1) {
    uVar4 = 0;
  }
  else {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        uVar4 = 0;
        goto LAB_1007a65ef;
      }
    }
    QArrayData::deallocate(pQVar2,2,8);
    uVar4 = 0;
  }
LAB_1007a65ef:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

