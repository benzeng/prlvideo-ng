
undefined8 FUN_100585050(long param_1,long param_2)

{
  long *plVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  long *plVar4;
  char cVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar9 = *(long *)(param_2 + 8);
  local_38 = lVar6;
  if (lVar9 != param_2) {
    do {
      if (*(int *)(lVar9 + 0x10) == 0) {
        pcVar7 = "Image type is not recognized!";
LAB_100585414:
        FUN_1008e3970("","vdisk",0,pcVar7);
        uVar8 = 0x80021008;
        lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
        goto LAB_1005857b8;
      }
      cVar5 = FUN_1007ea210((undefined8 *)(lVar9 + 0x28));
      if (cVar5 != '\0') {
        pcVar7 = "Uid of image is not recognized!";
        goto LAB_100585414;
      }
      local_78 = *(undefined8 *)(lVar9 + 0x28);
      local_70 = *(undefined8 *)(lVar9 + 0x30);
      pQVar2 = *(QArrayData **)(lVar9 + 0x18);
      if (1 < *(int *)pQVar2 + 1U) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + 1;
        UNLOCK();
      }
      local_68 = *(undefined4 *)(lVar9 + 0x10);
      pQVar3 = *(QArrayData **)(lVar9 + 0x20);
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        UNLOCK();
      }
      local_50 = *(undefined8 *)(lVar9 + 0x28);
      local_48 = *(undefined8 *)(lVar9 + 0x30);
      plVar4 = *(long **)(lVar9 + 0x38);
      if (plVar4 != (long *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (1 < *(int *)pQVar2 + 1U) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + 1;
        UNLOCK();
      }
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        UNLOCK();
      }
      if (plVar4 != (long *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      if (1 < *(int *)pQVar2 + 1U) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + 1;
        UNLOCK();
      }
      if (1 < *(int *)pQVar3 + 1U) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + 1;
        UNLOCK();
      }
      if (plVar4 != (long *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_60 = pQVar2;
      local_58 = pQVar3;
      local_40 = plVar4;
      FUN_1005990a0(param_1 + 0x20,&local_78);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          UNLOCK();
          if (*(int *)local_58 != 0) goto LAB_100585283;
        }
        QArrayData::deallocate(local_58,2,8);
      }
LAB_100585283:
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          UNLOCK();
          if (*(int *)local_60 != 0) goto LAB_1005852b9;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_1005852b9:
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 != 0) goto LAB_10058530c;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_10058530c:
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          UNLOCK();
          if (*(int *)pQVar2 != 0) goto LAB_10058533f;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
LAB_10058533f:
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      if (*(int *)pQVar3 != -1) {
        if (*(int *)pQVar3 != 0) {
          LOCK();
          *(int *)pQVar3 = *(int *)pQVar3 + -1;
          UNLOCK();
          if (*(int *)pQVar3 != 0) goto LAB_100585392;
        }
        QArrayData::deallocate(pQVar3,2,8);
      }
LAB_100585392:
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          UNLOCK();
          if (*(int *)pQVar2 != 0) goto LAB_1005853c5;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
LAB_1005853c5:
      lVar9 = *(long *)(lVar9 + 8);
    } while (lVar9 != param_2);
    lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  uVar8 = 0;
LAB_1005857b8:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

