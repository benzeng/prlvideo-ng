
void FUN_1003dd270(undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  code *pcVar1;
  int iVar2;
  _func_void_Node_ptr *local_110;
  _func_void_Node_ptr *local_108;
  _func_void_Node_ptr *local_100;
  _func_void_Node_ptr *local_f8;
  _func_void_Node_ptr *local_f0;
  _func_void_Node_ptr *local_e8;
  _func_void_Node_ptr *local_e0;
  _func_void_Node_ptr *local_d8;
  _func_void_Node_ptr *local_d0;
  _func_void_Node_ptr *local_c8;
  _func_void_Node_ptr *local_c0;
  _func_void_Node_ptr *local_b8;
  _func_void_Node_ptr *local_b0;
  _func_void_Node_ptr *local_a8;
  _func_void_Node_ptr *local_a0;
  _func_void_Node_ptr *local_98;
  _func_void_Node_ptr *local_90;
  _func_void_Node_ptr *local_88;
  _func_void_Node_ptr *local_80;
  _func_void_Node_ptr *local_78;
  _func_void_Node_ptr *local_70;
  _func_void_Node_ptr *local_68;
  _func_void_Node_ptr *local_60;
  _func_void_Node_ptr *local_58;
  _func_void_Node_ptr *local_50;
  _func_void_Node_ptr *local_48;
  _func_void_Node_ptr *local_40;
  _func_void_Node_ptr *local_38;
  _func_void_Node_ptr *local_30;
  _func_void_Node_ptr *local_28;
  _func_void_Node_ptr *local_20;
  bool local_11;
  
  if ((int)param_2 != 0xc) {
    if ((int)param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      FUN_1003c0a30(&local_20,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_20);
      }
      if (*(int *)(local_20 + 0x10) == -1) {
        return;
      }
      local_110 = local_20;
      if (*(int *)(local_20 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_20 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 1:
      FUN_1003c1770(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 2:
      FUN_1003c30f0(&local_28,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_28);
      }
      if (*(int *)(local_28 + 0x10) == -1) {
        return;
      }
      local_110 = local_28;
      if (*(int *)(local_28 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_28 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 3:
      FUN_1003c3070(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 4:
      FUN_1003c3ed0(&local_30,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_30);
      }
      if (*(int *)(local_30 + 0x10) == -1) {
        return;
      }
      local_110 = local_30;
      if (*(int *)(local_30 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 5:
      FUN_1003c3530(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 6:
      FUN_1003c4310(&local_38,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_38);
      }
      if (*(int *)(local_38 + 0x10) == -1) {
        return;
      }
      local_110 = local_38;
      if (*(int *)(local_38 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_38 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 7:
      FUN_1003c4750(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 8:
      FUN_1003c48e0(&local_40,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_40);
      }
      if (*(int *)(local_40 + 0x10) == -1) {
        return;
      }
      local_110 = local_40;
      if (*(int *)(local_40 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_40 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 9:
      FUN_1003c5be0(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 10:
      FUN_1003c7340(&local_48,param_1,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_48);
      }
      if (*(int *)(local_48 + 0x10) == -1) {
        return;
      }
      local_110 = local_48;
      if (*(int *)(local_48 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_48 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0xb:
      FUN_1003c7e80(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0xc:
      FUN_1003c8110(&local_50,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_50);
      }
      if (*(int *)(local_50 + 0x10) == -1) {
        return;
      }
      local_110 = local_50;
      if (*(int *)(local_50 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_50 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0xd:
      FUN_1003c8690(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0xe:
      FUN_1003c8860(&local_58,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_58);
      }
      if (*(int *)(local_58 + 0x10) == -1) {
        return;
      }
      local_110 = local_58;
      if (*(int *)(local_58 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_58 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0xf:
      FUN_1003c8ff0(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x10:
      FUN_1003c92d0(&local_60,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_60);
      }
      if (*(int *)(local_60 + 0x10) == -1) {
        return;
      }
      local_110 = local_60;
      if (*(int *)(local_60 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_60 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x11:
      FUN_1003c97d0(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x12:
      FUN_1003c9850(&local_68,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_68);
      }
      if (*(int *)(local_68 + 0x10) == -1) {
        return;
      }
      local_110 = local_68;
      if (*(int *)(local_68 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_68 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x13:
      FUN_1003c9cb0(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x14:
      FUN_1003c9d70(&local_70,param_1,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_70);
      }
      if (*(int *)(local_70 + 0x10) == -1) {
        return;
      }
      local_110 = local_70;
      if (*(int *)(local_70 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_70 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x15:
      FUN_1003ca8a0(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x16:
      FUN_1003cac40(&local_78,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_78);
      }
      if (*(int *)(local_78 + 0x10) == -1) {
        return;
      }
      local_110 = local_78;
      if (*(int *)(local_78 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_78 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x17:
      FUN_1003cb320(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x18:
      FUN_1003cb5f0(&local_80,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_80);
      }
      if (*(int *)(local_80 + 0x10) == -1) {
        return;
      }
      local_110 = local_80;
      if (*(int *)(local_80 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_80 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x19:
      FUN_1003cbee0(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x1a:
      FUN_1003cc9f0(&local_88,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_88);
      }
      if (*(int *)(local_88 + 0x10) == -1) {
        return;
      }
      local_110 = local_88;
      if (*(int *)(local_88 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_88 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x1b:
      FUN_1003cce40(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x1c:
      FUN_1003ccec0(&local_90,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_90);
      }
      if (*(int *)(local_90 + 0x10) == -1) {
        return;
      }
      local_110 = local_90;
      if (*(int *)(local_90 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_90 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x1d:
      FUN_1003cd790(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x1e:
      FUN_1003cda20(&local_98,param_1,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_98);
      }
      if (*(int *)(local_98 + 0x10) == -1) {
        return;
      }
      local_110 = local_98;
      if (*(int *)(local_98 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_98 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x1f:
      FUN_1003cdfa0(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x20:
      FUN_1003ce020(&local_a0,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_a0);
      }
      if (*(int *)(local_a0 + 0x10) == -1) {
        return;
      }
      local_110 = local_a0;
      if (*(int *)(local_a0 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_a0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x21:
      FUN_1003ce560(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x22:
      FUN_1003ce5e0(&local_a8,param_1,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_a8);
      }
      if (*(int *)(local_a8 + 0x10) == -1) {
        return;
      }
      local_110 = local_a8;
      if (*(int *)(local_a8 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_a8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x23:
      FUN_1003cf080(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x24:
      FUN_1003cf6d0(&local_b0,param_1,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_b0);
      }
      if (*(int *)(local_b0 + 0x10) == -1) {
        return;
      }
      local_110 = local_b0;
      if (*(int *)(local_b0 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_b0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x25:
      FUN_1003d0070(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x26:
      FUN_1003d0180(&local_b8,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_b8);
      }
      if (*(int *)(local_b8 + 0x10) == -1) {
        return;
      }
      local_110 = local_b8;
      if (*(int *)(local_b8 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_b8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x27:
      FUN_1003d05c0(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x28:
      FUN_1003d08b0(&local_c0,param_2,*(undefined8 *)param_4[1]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_c0);
      }
      if (*(int *)(local_c0 + 0x10) == -1) {
        return;
      }
      local_110 = local_c0;
      if (*(int *)(local_c0 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_c0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x29:
      FUN_1003d1a30(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x2a:
      FUN_1003d32c0(&local_c8,param_1,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_c8);
      }
      if (*(int *)(local_c8 + 0x10) == -1) {
        return;
      }
      local_110 = local_c8;
      if (*(int *)(local_c8 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_c8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x2b:
      FUN_1003d3a70(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x2c:
      FUN_1003d3cb0(&local_d0,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_d0);
      }
      if (*(int *)(local_d0 + 0x10) == -1) {
        return;
      }
      local_110 = local_d0;
      if (*(int *)(local_d0 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_d0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x2d:
      FUN_1003d45a0(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x2e:
      FUN_1003d5010(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x2f:
      FUN_1003d52f0(&local_d8,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_d8);
      }
      if (*(int *)(local_d8 + 0x10) == -1) {
        return;
      }
      local_110 = local_d8;
      if (*(int *)(local_d8 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_d8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x30:
      FUN_1003d5730(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x31:
      FUN_1003d63d0(&local_e0,param_2,*(undefined8 *)param_4[1]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_e0);
      }
      if (*(int *)(local_e0 + 0x10) == -1) {
        return;
      }
      local_110 = local_e0;
      if (*(int *)(local_e0 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_e0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x32:
      FUN_1003d6750(param_1,*(undefined8 *)param_4[1]);
      return;
    case 0x33:
      FUN_1003d83d0(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x34:
      FUN_1003d8450(&local_e8,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_e8);
      }
      if (*(int *)(local_e8 + 0x10) == -1) {
        return;
      }
      local_110 = local_e8;
      if (*(int *)(local_e8 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_e8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x35:
      FUN_1003d8890(&local_f0,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_f0);
      }
      if (*(int *)(local_f0 + 0x10) == -1) {
        return;
      }
      local_110 = local_f0;
      if (*(int *)(local_f0 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_f0 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x36:
      FUN_1003d8e10(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x37:
      FUN_1003d90a0(&local_f8,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_f8);
      }
      if (*(int *)(local_f8 + 0x10) == -1) {
        return;
      }
      local_110 = local_f8;
      if (*(int *)(local_f8 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_f8 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x38:
      FUN_1003d9650(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x39:
      FUN_1003d9910(&local_100,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_100);
      }
      if (*(int *)(local_100 + 0x10) == -1) {
        return;
      }
      local_110 = local_100;
      if (*(int *)(local_100 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_100 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x3a:
      FUN_1003da030(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    case 0x3b:
      FUN_1003da300(&local_108,param_1,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_108);
      }
      if (*(int *)(local_108 + 0x10) == -1) {
        return;
      }
      local_110 = local_108;
      if (*(int *)(local_108 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_108 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x3c:
      FUN_1003db800(param_1,*(undefined8 *)param_4[1]);
      return;
    case 0x3d:
      FUN_1003dbd30(&local_110,param_2,*(undefined8 *)param_4[1],param_4[2]);
      if (*param_4 != 0) {
        FUN_1003ded90(*param_4,&local_110);
      }
      if (*(int *)(local_110 + 0x10) == -1) {
        return;
      }
      if (*(int *)(local_110 + 0x10) == 0) goto LAB_1003de017;
      LOCK();
      pcVar1 = local_110 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_11 = *(int *)pcVar1 != 0;
      UNLOCK();
      break;
    case 0x3e:
      FUN_1003dc170(param_1,*(undefined8 *)param_4[1],param_4[2]);
      return;
    default:
      return;
    }
    if (local_11 != false) {
      return;
    }
LAB_1003de017:
    QHashData::free_helper(local_110);
    return;
  }
  switch(param_3) {
  case 0:
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
    iVar2 = *(int *)param_4[1];
    if (iVar2 == 0) {
      iVar2 = FUN_1003dff90();
      goto LAB_1003dd380;
    }
    break;
  case 0xd:
    iVar2 = *(int *)param_4[1];
    if (iVar2 == 0) {
LAB_1003dd34c:
      iVar2 = FUN_1003dff90();
      goto LAB_1003dd380;
    }
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
    if (*(int *)param_4[1] == 0) goto LAB_1003dd34c;
    if (*(int *)param_4[1] != 1) {
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    goto LAB_1003dd358;
  default:
    goto switchD_1003dd2a0_default;
  }
  if (iVar2 != 1) {
switchD_1003dd2a0_default:
    *(undefined4 *)*param_4 = 0xffffffff;
    return;
  }
LAB_1003dd358:
  iVar2 = DAT_102273e78;
  if (DAT_102273e78 == 0) {
    iVar2 = FUN_1003df970("Mappings::Values",0xffffffffffffffff,1);
    DAT_102273e78 = iVar2;
  }
LAB_1003dd380:
  *(int *)*param_4 = iVar2;
  return;
}

