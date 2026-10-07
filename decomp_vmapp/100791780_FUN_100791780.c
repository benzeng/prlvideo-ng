
undefined8 * FUN_100791780(undefined8 *param_1,char *param_2,long *param_3,char param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  size_t sVar9;
  undefined1 local_98 [76];
  uint local_4c;
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar8;
  uVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x78))();
  iVar3 = QDataStream::readRawData(param_2,(int)local_98);
  if (iVar3 == 0x52) {
    (**(code **)(**(long **)(param_2 + 8) + 0x88))(*(long **)(param_2 + 8),uVar4);
    sVar9 = 0x90;
    if (1 < (ulong)local_4c) {
      sVar9 = (ulong)local_4c * 0x10 + 0x80;
    }
    pvVar5 = _malloc(sVar9);
    if (pvVar5 == (void *)0x0) {
      FUN_1008e3970("","IOCommunication",0,"Can\'t allocate memory!");
      *param_1 = 0;
      lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    else {
      FUN_100791cd0(pvVar5,param_2);
      plVar6 = (long *)FUN_100792890(pvVar5,FUN_100790ef0,1);
      if (plVar6 != (long *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar6 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      if ((*param_3 != 0) &&
         (puVar2 = *(undefined8 **)(*param_3 + 0x10), puVar2 != (undefined8 *)0x0)) {
        if (param_4 == '\0') {
          lVar8 = 0;
          if (plVar6 != (long *)0x0) {
            lVar8 = plVar6[2];
          }
          uVar4 = *puVar2;
          *(undefined8 *)(lVar8 + 0x18) = puVar2[1];
          *(undefined8 *)(lVar8 + 0x10) = uVar4;
          lVar7 = 0;
          if (*param_3 != 0) {
            lVar7 = *(long *)(*param_3 + 0x10);
          }
          uVar4 = *(undefined8 *)(lVar7 + 0x20);
          *(undefined8 *)(lVar8 + 0x38) = *(undefined8 *)(lVar7 + 0x28);
          *(undefined8 *)(lVar8 + 0x30) = uVar4;
        }
        else {
          lVar8 = 0;
          if (plVar6 != (long *)0x0) {
            lVar8 = plVar6[2];
          }
          uVar4 = *puVar2;
          *(undefined8 *)(lVar8 + 0x18) = puVar2[1];
          *(undefined8 *)(lVar8 + 0x10) = uVar4;
        }
      }
      *param_1 = plVar6;
      if (plVar6 != (long *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (plVar6 != (long *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    (**(code **)(**(long **)(param_2 + 8) + 0x88))(*(long **)(param_2 + 8),uVar4);
    FUN_1008e3970("","IOCommunication",0,"Read from Qt stream failed!");
    *param_1 = 0;
  }
  if (lVar8 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

