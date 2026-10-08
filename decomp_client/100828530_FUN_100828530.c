
void FUN_100828530(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  
  if (param_2 == 0xc) {
    if ((param_3 != 2) || (*(int *)param_4[1] != 0)) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    uVar1 = FUN_100809850();
    puVar2 = (undefined4 *)*param_4;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      FUN_1002eb250();
      return;
    case 1:
      FUN_1002eb270();
      return;
    case 2:
      local_28 = *(int **)param_4[1];
      uStack_20 = ((undefined8 *)param_4[1])[1];
      if (local_28 != (int *)0x0) {
        LOCK();
        *local_28 = *local_28 + 1;
        local_11 = *local_28 != 0;
        UNLOCK();
      }
      FUN_1002ed660(param_1,&local_28);
      if (local_28 == (int *)0x0) {
        return;
      }
      LOCK();
      *local_28 = *local_28 + -1;
      local_11 = *local_28 != 0;
      UNLOCK();
      if ((bool)local_11) {
        return;
      }
      if (local_28 != (int *)0x0) {
        operator_delete(local_28);
        return;
      }
      return;
    case 3:
      FUN_1002ed6f0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_1002ed740();
      return;
    case 5:
      FUN_1002ed960(param_1,param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 6:
      FUN_1002edbb0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 7:
      FUN_1002edce0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 8:
      FUN_1002ede10(param_1,*(undefined4 *)param_4[1]);
      return;
    case 9:
      uVar1 = FUN_1002eb960();
      break;
    case 10:
      uVar1 = FUN_1002ebc40();
      break;
    case 0xb:
      uVar1 = FUN_1002ed0c0();
      break;
    case 0xc:
      uVar1 = FUN_1002ed320();
      break;
    default:
      return;
    }
    puVar2 = (undefined4 *)*param_4;
    if (puVar2 == (undefined4 *)0x0) {
      return;
    }
  }
  *puVar2 = uVar1;
  return;
}

