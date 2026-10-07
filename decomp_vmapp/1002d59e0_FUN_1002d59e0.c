
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1002d59e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined4 local_34;
  
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] dev open, valid %d",param_1 + 0x107,(int)param_1[3]);
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
    *(undefined4 *)(*param_1 + 0x20) = 0xffffffff;
    param_1[6] = 0;
  }
  if ((int)param_1[3] == 0) {
    iVar3 = (**(code **)(*(long *)*param_1 + 0x28))();
    if (iVar3 < 0) {
      return iVar3;
    }
    *(undefined4 *)(param_1 + 3) = 1;
    if (param_1[6] != 0) {
      return 0;
    }
  }
  puVar4 = operator_new(0x12);
  param_1[6] = (long)puVar4;
  *(undefined2 *)(puVar4 + 2) = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  plVar1 = param_1 + 0x107;
  local_34 = 0x12;
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
LAB_1002d5c9a:
    local_34 = 0x12;
    _DAT_00000020 = 0xffffffff;
    iVar3 = -1;
  }
  else {
    iVar3 = (**(code **)(*plVar2 + 0x58))(plVar2,0x80,6,0x100,0,puVar4,&local_34,0);
    if (iVar3 == -0x1fffbfaf) {
      _usleep(100);
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970("","USB",0,"[%s] try %d: failed to get device descriptor; error 0x%x",plVar1,0
                      ,0xe0004051);
      }
      local_34 = 0x12;
      plVar2 = (long *)*param_1;
      if (plVar2 == (long *)0x0) goto LAB_1002d5c9a;
      iVar3 = (**(code **)(*plVar2 + 0x58))(plVar2,0x80,6,0x100,0,param_1[6],&local_34,0);
      if (iVar3 == -0x1fffbfaf) {
        _usleep(100);
        if (-1 < DAT_1011c568c) {
          FUN_1008e3970("","USB",0,"[%s] try %d: failed to get device descriptor; error 0x%x",plVar1
                        ,1,0xe0004051);
        }
        local_34 = 0x12;
        plVar2 = (long *)*param_1;
        if (plVar2 == (long *)0x0) goto LAB_1002d5c9a;
        iVar3 = (**(code **)(*plVar2 + 0x58))(plVar2,0x80,6,0x100,0,param_1[6],&local_34,0);
        if (iVar3 == -0x1fffbfaf) {
          _usleep(100);
          if (-1 < DAT_1011c568c) {
            FUN_1008e3970("","USB",0,"[%s] try %d: failed to get device descriptor; error 0x%x",
                          plVar1,2,0xe0004051);
          }
          *(undefined4 *)(*param_1 + 0x20) = 0xe0004051;
          iVar3 = -0x1fffbfaf;
          goto LAB_1002d5cbe;
        }
      }
    }
    *(int *)(*param_1 + 0x20) = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
  }
LAB_1002d5cbe:
  if (-1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] Can\'t get device descriptor; error 0x%x",plVar1,iVar3);
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
  }
  param_1[6] = 0;
  return 0;
}

