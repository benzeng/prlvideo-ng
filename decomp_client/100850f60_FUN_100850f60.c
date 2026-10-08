
void FUN_100850f60(undefined8 param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int *local_d8;
  undefined8 uStack_d0;
  int *local_c8;
  undefined8 uStack_c0;
  int *local_b8;
  undefined8 uStack_b0;
  int *local_a8;
  undefined8 uStack_a0;
  int *local_98;
  undefined8 uStack_90;
  int *local_88;
  undefined8 uStack_80;
  int *local_78;
  undefined8 uStack_70;
  int *local_68;
  undefined8 uStack_60;
  int *local_58;
  undefined8 uStack_50;
  int *local_48;
  undefined8 uStack_40;
  int *local_38;
  undefined8 uStack_30;
  int *local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  
  if (param_2 == 0xc) {
    switch(param_3) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      if (*(int *)param_4[1] == 1) {
        uVar2 = FUN_100809850();
        *(undefined4 *)*param_4 = uVar2;
        return;
      }
    }
    *(undefined4 *)*param_4 = 0xffffffff;
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1006e28e0();
      return;
    case 1:
      uVar1 = *(undefined8 *)param_4[1];
      local_28 = *(int **)param_4[2];
      uStack_20 = ((undefined8 *)param_4[2])[1];
      if (local_28 != (int *)0x0) {
        LOCK();
        *local_28 = *local_28 + 1;
        local_11 = *local_28 != 0;
        UNLOCK();
      }
      FUN_1006e2c20(param_1,uVar1,&local_28,*(undefined4 *)param_4[3]);
      if (local_28 != (int *)0x0) {
        LOCK();
        *local_28 = *local_28 + -1;
        local_11 = *local_28 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_28 != (int *)0x0)) {
          operator_delete(local_28);
        }
      }
      break;
    case 2:
      uVar1 = *(undefined8 *)param_4[1];
      local_38 = *(int **)param_4[2];
      uStack_30 = ((undefined8 *)param_4[2])[1];
      if (local_38 != (int *)0x0) {
        LOCK();
        *local_38 = *local_38 + 1;
        local_11 = *local_38 != 0;
        UNLOCK();
      }
      FUN_1006e2c20(param_1,uVar1,&local_38,1);
      if (local_38 != (int *)0x0) {
        LOCK();
        *local_38 = *local_38 + -1;
        local_11 = *local_38 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_38 != (int *)0x0)) {
          operator_delete(local_38);
        }
      }
      break;
    case 3:
      uVar1 = *(undefined8 *)param_4[1];
      local_48 = *(int **)param_4[2];
      uStack_40 = ((undefined8 *)param_4[2])[1];
      if (local_48 != (int *)0x0) {
        LOCK();
        *local_48 = *local_48 + 1;
        local_11 = *local_48 != 0;
        UNLOCK();
      }
      FUN_1006e2ce0(param_1,uVar1,&local_48,*(undefined4 *)param_4[3]);
      if (local_48 != (int *)0x0) {
        LOCK();
        *local_48 = *local_48 + -1;
        local_11 = *local_48 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_48 != (int *)0x0)) {
          operator_delete(local_48);
        }
      }
      break;
    case 4:
      uVar1 = *(undefined8 *)param_4[1];
      local_58 = *(int **)param_4[2];
      uStack_50 = ((undefined8 *)param_4[2])[1];
      if (local_58 != (int *)0x0) {
        LOCK();
        *local_58 = *local_58 + 1;
        local_11 = *local_58 != 0;
        UNLOCK();
      }
      FUN_1006e2ce0(param_1,uVar1,&local_58,1);
      if (local_58 != (int *)0x0) {
        LOCK();
        *local_58 = *local_58 + -1;
        local_11 = *local_58 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_58 != (int *)0x0)) {
          operator_delete(local_58);
        }
      }
      break;
    case 5:
      uVar1 = *(undefined8 *)param_4[1];
      local_68 = *(int **)param_4[2];
      uStack_60 = ((undefined8 *)param_4[2])[1];
      if (local_68 != (int *)0x0) {
        LOCK();
        *local_68 = *local_68 + 1;
        local_11 = *local_68 != 0;
        UNLOCK();
      }
      FUN_1006e3ae0(param_1,uVar1,&local_68,*(undefined4 *)param_4[3]);
      if (local_68 != (int *)0x0) {
        LOCK();
        *local_68 = *local_68 + -1;
        local_11 = *local_68 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_68 != (int *)0x0)) {
          operator_delete(local_68);
        }
      }
      break;
    case 6:
      uVar1 = *(undefined8 *)param_4[1];
      local_78 = *(int **)param_4[2];
      uStack_70 = ((undefined8 *)param_4[2])[1];
      if (local_78 != (int *)0x0) {
        LOCK();
        *local_78 = *local_78 + 1;
        local_11 = *local_78 != 0;
        UNLOCK();
      }
      FUN_1006e3ae0(param_1,uVar1,&local_78,1);
      if (local_78 != (int *)0x0) {
        LOCK();
        *local_78 = *local_78 + -1;
        local_11 = *local_78 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_78 != (int *)0x0)) {
          operator_delete(local_78);
        }
      }
      break;
    case 7:
      uVar1 = *(undefined8 *)param_4[1];
      local_88 = *(int **)param_4[2];
      uStack_80 = ((undefined8 *)param_4[2])[1];
      if (local_88 != (int *)0x0) {
        LOCK();
        *local_88 = *local_88 + 1;
        local_11 = *local_88 != 0;
        UNLOCK();
      }
      FUN_1006e3ee0(param_1,uVar1,&local_88,*(undefined4 *)param_4[3]);
      if (local_88 != (int *)0x0) {
        LOCK();
        *local_88 = *local_88 + -1;
        local_11 = *local_88 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_88 != (int *)0x0)) {
          operator_delete(local_88);
        }
      }
      break;
    case 8:
      uVar1 = *(undefined8 *)param_4[1];
      local_98 = *(int **)param_4[2];
      uStack_90 = ((undefined8 *)param_4[2])[1];
      if (local_98 != (int *)0x0) {
        LOCK();
        *local_98 = *local_98 + 1;
        local_11 = *local_98 != 0;
        UNLOCK();
      }
      FUN_1006e3ee0(param_1,uVar1,&local_98,1);
      if (local_98 != (int *)0x0) {
        LOCK();
        *local_98 = *local_98 + -1;
        local_11 = *local_98 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_98 != (int *)0x0)) {
          operator_delete(local_98);
        }
      }
      break;
    case 9:
      uVar1 = *(undefined8 *)param_4[1];
      local_a8 = *(int **)param_4[2];
      uStack_a0 = ((undefined8 *)param_4[2])[1];
      if (local_a8 != (int *)0x0) {
        LOCK();
        *local_a8 = *local_a8 + 1;
        local_11 = *local_a8 != 0;
        UNLOCK();
      }
      FUN_1006e4380(param_1,uVar1,&local_a8,*(undefined4 *)param_4[3]);
      if (local_a8 != (int *)0x0) {
        LOCK();
        *local_a8 = *local_a8 + -1;
        local_11 = *local_a8 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_a8 != (int *)0x0)) {
          operator_delete(local_a8);
        }
      }
      break;
    case 10:
      uVar1 = *(undefined8 *)param_4[1];
      local_b8 = *(int **)param_4[2];
      uStack_b0 = ((undefined8 *)param_4[2])[1];
      if (local_b8 != (int *)0x0) {
        LOCK();
        *local_b8 = *local_b8 + 1;
        local_11 = *local_b8 != 0;
        UNLOCK();
      }
      FUN_1006e4380(param_1,uVar1,&local_b8,1);
      if (local_b8 != (int *)0x0) {
        LOCK();
        *local_b8 = *local_b8 + -1;
        local_11 = *local_b8 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_b8 != (int *)0x0)) {
          operator_delete(local_b8);
        }
      }
      break;
    case 0xb:
      uVar1 = *(undefined8 *)param_4[1];
      local_c8 = *(int **)param_4[2];
      uStack_c0 = ((undefined8 *)param_4[2])[1];
      if (local_c8 != (int *)0x0) {
        LOCK();
        *local_c8 = *local_c8 + 1;
        local_11 = *local_c8 != 0;
        UNLOCK();
      }
      FUN_1006e4cb0(param_1,uVar1,&local_c8,*(undefined4 *)param_4[3]);
      if (local_c8 != (int *)0x0) {
        LOCK();
        *local_c8 = *local_c8 + -1;
        local_11 = *local_c8 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_c8 != (int *)0x0)) {
          operator_delete(local_c8);
        }
      }
      break;
    case 0xc:
      uVar1 = *(undefined8 *)param_4[1];
      local_d8 = *(int **)param_4[2];
      uStack_d0 = ((undefined8 *)param_4[2])[1];
      if (local_d8 != (int *)0x0) {
        LOCK();
        *local_d8 = *local_d8 + 1;
        local_11 = *local_d8 != 0;
        UNLOCK();
      }
      FUN_1006e4cb0(param_1,uVar1,&local_d8,1);
      if (local_d8 != (int *)0x0) {
        LOCK();
        *local_d8 = *local_d8 + -1;
        local_11 = *local_d8 != 0;
        UNLOCK();
        if ((!(bool)local_11) && (local_d8 != (int *)0x0)) {
          operator_delete(local_d8);
        }
      }
    }
  }
  return;
}

