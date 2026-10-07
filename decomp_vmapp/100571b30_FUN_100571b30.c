
/* WARNING: Type propagation algorithm not settling */

int FUN_100571b30(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                 undefined8 param_5)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *******local_60;
  undefined8 *******local_58;
  long local_50;
  undefined1 local_48 [16];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar5;
  FUN_1007d6870(local_48);
  iVar2 = (**(code **)(*param_1 + 0x3a0))(param_1,param_2,local_48);
  if (iVar2 < 0) {
    FUN_1008e3970("","vdisk",0,"Error getting uid for clone [0x%x]",iVar2);
  }
  else {
    QMutex::lock();
    *(undefined1 *)(param_1 + 0x23b) = 1;
    local_60 = &local_60;
    local_50 = 0;
    plVar4 = (long *)0x0;
    if (param_1[1] != 0) {
      plVar4 = *(long **)(param_1[1] + 0x10);
    }
    local_58 = local_60;
    iVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,param_3,local_48,&local_60);
    if ((-1 < iVar2) && (pppppppuVar1 = local_58, local_50 != 0)) {
      for (; (undefined8 ********)pppppppuVar1 != &local_60;
          pppppppuVar1 = (undefined8 *******)pppppppuVar1[1]) {
        iVar2 = FUN_100571cf0(pppppppuVar1 + 2,pppppppuVar1 + 6);
        if (iVar2 < 0) {
          FUN_1006f3770(param_3);
          break;
        }
      }
    }
    QMutex::unlock();
    if (iVar2 < 0) {
      FUN_1008e3970("","vdisk",0,"Error executing linked clone [0x%x]",iVar2);
    }
    if (param_4 != (code *)0x0) {
      iVar3 = 0x3ed;
      if (iVar2 < 0) {
        iVar3 = iVar2;
      }
      (*param_4)(iVar3,param_5);
    }
    FUN_10057e6a0(&local_60);
    lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

