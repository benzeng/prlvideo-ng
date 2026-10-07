
undefined8
FUN_1004cd160(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  QArrayData *pQVar8;
  undefined8 uVar9;
  long *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  undefined4 local_8c;
  QString local_88;
  QArrayData *local_80;
  long *local_78;
  undefined1 local_69;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [40];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar9 = 0xf0000003;
  local_38 = lVar2;
  if ((((*(short *)(param_2 + 0x16) != 2) || (*(short *)(param_2 + 0x14) != 0)) ||
      (lVar5 = FUN_1002a6120(param_2,0,0), lVar5 == 0)) ||
     ((lVar6 = FUN_1002a6120(param_2,1,1), lVar6 == 0 ||
      (uVar9 = 0xf0000009, *(uint *)(lVar5 + 8) < 0x30)))) goto LAB_1004cd59e;
  FUN_1002a5990(lVar5,0,&local_68,0x30);
  if (local_64 != 1) {
    uVar9 = 0xf0000003;
    if ((local_64 != 0) ||
       (FUN_1004cef90(&local_78,*param_1 + 0x48,local_68), local_78 == (long *)0x0))
    goto LAB_1004cd59e;
    cVar3 = FUN_1004d84c0(local_78);
    if (cVar3 == '\0') {
      local_8c = 0;
      uVar9 = 0;
      uVar4 = FUN_1002a5a50(lVar6,0,&local_8c,4);
      *(undefined4 *)(lVar6 + 0x10) = uVar4;
    }
    else {
      lVar5 = FUN_1004d4d30(local_60);
      if (lVar5 == 0) {
        lVar5 = FUN_1004d4d30("UTF-8");
      }
      local_78[0xc] = lVar5;
      local_80 = (QArrayData *)PTR_shared_null_100ba20d0;
      if ((char)local_78[6] == '\0') {
        QByteArray::append((char)&local_80);
      }
      else {
        QByteArray::append((char)&local_80);
      }
      QTextCodec::fromUnicode(&local_88);
      QByteArray::append((QByteArray *)&local_80);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_69 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_1004cd522;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,1,8);
      }
LAB_1004cd522:
      uVar9 = 0xf0000009;
      if (*(int *)(local_80 + 4) < *(int *)(lVar6 + 8)) {
        uVar9 = 0;
        uVar4 = FUN_1002a5a50(lVar6,0,local_80 + *(long *)(local_80 + 0x10),
                              *(int *)(local_80 + 4) + 1);
        *(undefined4 *)(lVar6 + 0x10) = uVar4;
      }
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_69 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_1004cd580;
        }
        QArrayData::deallocate(local_80,1,8);
      }
    }
LAB_1004cd580:
    LOCK();
    plVar1 = local_78 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_78 + 0x10))(local_78);
    }
    goto LAB_1004cd59e;
  }
  lVar7 = FUN_1004d4d30(local_60);
  if (lVar7 == 0) {
    lVar7 = FUN_1004d4d30("UTF-8");
  }
  pQVar8 = (QArrayData *)QArrayData::allocate(1,8,0x1000,0,param_5,param_6,lVar7);
  local_98 = pQVar8;
  if (pQVar8 == (QArrayData *)0x0) {
    qBadAlloc();
  }
  *(uint *)(pQVar8 + 4) = 0x1000;
  ___bzero(pQVar8 + *(long *)(pQVar8 + 0x10),0x1000);
  uVar4 = *(undefined4 *)(lVar6 + 8);
  if (1 < *(uint *)pQVar8) {
    if ((*(uint *)(pQVar8 + 8) & 0x7fffffff) == 0) {
      pQVar8 = (QArrayData *)QArrayData::allocate(1,8,0,2,param_5,param_6,lVar7);
      local_98 = pQVar8;
    }
    else {
      FUN_1004d6920(&local_98,*(uint *)(pQVar8 + 4),*(uint *)(pQVar8 + 8) & 0x7fffffff,0);
      pQVar8 = local_98;
    }
  }
  FUN_1002a5990(lVar6,1,pQVar8 + *(long *)(pQVar8 + 0x10),uVar4);
  QTextCodec::toUnicode((char *)&local_a0);
  FUN_1004ceb50(&local_a8,*param_1 + 0x48,&local_a0);
  uVar9 = 0xf0000003;
  if (local_a8 != (long *)0x0) {
    cVar3 = FUN_1004d84c0(local_a8);
    uVar9 = 0xf0000003;
    if (cVar3 != '\0') {
      local_68 = FUN_1004d8470(local_a8);
      uVar9 = 0;
      uVar4 = FUN_1002a5a50(lVar5,0,&local_68,0x30);
      *(undefined4 *)(lVar5 + 0x10) = uVar4;
    }
    LOCK();
    plVar1 = local_a8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_a8 + 0x10))(local_a8);
    }
  }
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_69 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_69) goto LAB_1004cd45f;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_1004cd45f:
  if (*(int *)pQVar8 != -1) {
    if (*(int *)pQVar8 != 0) {
      LOCK();
      *(int *)pQVar8 = *(int *)pQVar8 + -1;
      local_69 = *(int *)pQVar8 != 0;
      UNLOCK();
      if ((bool)local_69) goto LAB_1004cd59e;
    }
    QArrayData::deallocate(pQVar8,1,8);
  }
LAB_1004cd59e:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

