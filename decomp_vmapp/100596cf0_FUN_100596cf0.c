
void FUN_100596cf0(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  long *local_38;
  
  local_38 = (long *)0x0;
  if (param_2 < 0) {
    FUN_1008e3970("Compact","vdisk",0,"[%p]Error: Flush before block move failed with err %d",
                  param_1,param_2);
    QMutex::lock();
    FUN_100596660(param_1);
    QMutex::unlock();
    (**(code **)(param_1 + 0x160))(*(undefined8 *)(param_1 + 0x168),param_2);
  }
  else {
    cVar4 = (**(code **)(param_1 + 0x160))(*(undefined8 *)(param_1 + 0x168),0x80021017);
    if (cVar4 == '\0') {
      if (3 < DAT_1011b55f8) {
        FUN_1008e3970("Compact","vdisk",4,"[%p] Block move terminated by disk callback",param_1);
      }
      QMutex::lock();
      FUN_100596660(param_1);
      QMutex::unlock();
    }
    else {
      if (3 < DAT_1011b55f8) {
        FUN_1008e3970("Compact","vdisk",4,"[%p] Real block move start",param_1);
      }
      QMutex::lock();
      plVar9 = (long *)0x0;
      if (*(int *)(param_1 + 0x55c) != 0) {
        plVar2 = (long *)(param_1 + 0x100);
        uVar10 = 0;
        plVar8 = (long *)0x0;
        do {
          if ((long *)*plVar2 == (long *)0x0) {
LAB_100596e1e:
            plVar7 = plVar2;
          }
          else {
            uVar3 = *(ulong *)(param_1 + 0x180 + (ulong)uVar10 * 0x40);
            plVar9 = (long *)*plVar2;
            plVar6 = plVar2;
            do {
              while (plVar7 = plVar9, uVar3 <= (ulong)plVar7[4]) {
                plVar9 = (long *)*plVar7;
                plVar6 = plVar7;
                if ((long *)*plVar7 == (long *)0x0) goto LAB_100596e13;
              }
              plVar1 = plVar7 + 1;
              plVar7 = plVar6;
              plVar9 = (long *)*plVar1;
            } while ((long *)*plVar1 != (long *)0x0);
LAB_100596e13:
            if ((plVar7 == plVar2) || (uVar3 < (ulong)plVar7[4])) goto LAB_100596e1e;
          }
          if (plVar2 == plVar7) {
            FUN_1008e3970("Compact","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                          "st->m_AsyncBlockReqs.end() != it","Storage.cpp",0x1276,"FlushCb");
          }
          plVar9 = (long *)plVar7[5];
          if (plVar9 != (long *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          local_38 = plVar9;
          if (plVar8 != (long *)0x0) {
            LOCK();
            plVar6 = plVar8 + 1;
            lVar5 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
          lVar5 = (ulong)uVar10 * 0x40;
          FUN_100593420(param_1,*(undefined8 *)(param_1 + 0x178 + lVar5),&local_38,
                        *(undefined4 *)(param_1 + 0x188 + lVar5));
          uVar10 = uVar10 + 1;
          plVar8 = plVar9;
        } while (uVar10 < *(uint *)(param_1 + 0x55c));
      }
      QMutex::unlock();
      (**(code **)(**(long **)(param_1 + 0x70) + 0x108))();
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar2 = plVar9 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100596f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar9 + 0x10))(plVar9);
          return;
        }
      }
    }
  }
  return;
}

