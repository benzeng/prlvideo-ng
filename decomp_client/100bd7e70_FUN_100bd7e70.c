
undefined8 * FUN_100bd7e70(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 local_44;
  void *local_40;
  undefined4 local_38;
  int local_34;
  
  if ((*param_1 == 0x300) && (*(int *)(*(long *)(param_1 + 0x20) + 0x4a4) == 0)) {
    return param_2;
  }
  puVar6 = (undefined8 *)((long)param_2 + 2);
  if (param_3 <= puVar6) {
    return (undefined8 *)0x0;
  }
  puVar5 = param_2;
  if (((param_1[0x2a] == 0) && (param_1[0x7a] == 1)) &&
     (*(long *)(*(long *)(param_1 + 0x4c) + 0x118) != 0)) {
    if ((long)param_3 - (long)puVar6 < 4) {
      return (undefined8 *)0x0;
    }
    puVar6 = (undefined8 *)((long)param_2 + 6);
    *(undefined4 *)((long)param_2 + 2) = 0;
    puVar5 = (undefined8 *)((long)param_2 + 4);
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 0x4a4) == 0) {
LAB_100bd7f8a:
    if (*(long *)(param_1 + 0x88) != 0) {
      if ((long)param_3 - (long)puVar6 < 5) {
        return (undefined8 *)0x0;
      }
      if (((long)param_3 - (long)puVar6) - 5U < *(ulong *)(param_1 + 0x86)) {
        return (undefined8 *)0x0;
      }
      if (0xff < *(ulong *)(param_1 + 0x86)) {
        uVar7 = 0x2fe;
        goto LAB_100bd8021;
      }
      *(undefined2 *)puVar6 = 0xb00;
      *(char *)((long)puVar6 + 2) = (char)((uint)(param_1[0x86] + 1) >> 8);
      *(char *)((long)puVar6 + 3) = (char)param_1[0x86] + '\x01';
      *(char *)((long)puVar6 + 4) = (char)param_1[0x86];
      _memcpy((undefined1 *)((long)puVar6 + 5),*(void **)(param_1 + 0x88),
              *(size_t *)(param_1 + 0x86));
      puVar6 = (undefined8 *)(*(long *)(param_1 + 0x86) + 5 + (long)puVar6);
    }
    if ((param_1[0x85] != 0) && (uVar4 = FUN_100be4680(param_1,0x20,0,0), (uVar4 & 0x4000) == 0)) {
      if ((long)param_3 - (long)puVar6 < 4) {
        return (undefined8 *)0x0;
      }
      *(undefined4 *)puVar6 = 0x2300;
      puVar6 = (undefined8 *)((long)puVar6 + 4);
    }
    if (param_1[0x7c] != 0) {
      if ((long)param_3 - (long)puVar6 < 4) {
        return (undefined8 *)0x0;
      }
      *(undefined4 *)puVar6 = 0x500;
      puVar6 = (undefined8 *)((long)puVar6 + 4);
    }
    if ((**(int **)(param_1 + 2) == 0xfeff) && (*(long *)(param_1 + 0xa4) != 0)) {
      FUN_100be2a10(param_1,0,&local_38,0);
      if ((long)((long)param_3 + (-4 - (long)puVar6)) < (long)local_38) {
        return (undefined8 *)0x0;
      }
      *(undefined2 *)puVar6 = 0xe00;
      *(undefined1 *)((long)puVar6 + 2) = local_38._1_1_;
      *(undefined1 *)((long)puVar6 + 3) = (undefined1)local_38;
      iVar3 = FUN_100be2a10(param_1,(undefined4 *)((long)puVar6 + 4),&local_38,local_38);
      if (iVar3 != 0) {
        uVar7 = 0x33b;
        goto LAB_100bd8021;
      }
      puVar6 = (undefined8 *)((long)local_38 + 4 + (long)puVar6);
    }
    if (((*(ulong *)(*(long *)(*(long *)(param_1 + 0x20) + 0x3a8) + 0x10) & 0xfffe) == 0x80) &&
       (uVar4 = FUN_100be4680(param_1,0x20,0,0), (uVar4 & 0x80000000) != 0)) {
      if ((long)param_3 - (long)puVar6 < 0x24) {
        return (undefined8 *)0x0;
      }
      puVar6[3] = 0x852a060608301602;
      puVar6[2] = 0x203852a06060830;
      puVar6[1] = 0x9020203852a0606;
      *puVar6 = 0x8301e302000e8fd;
      *(undefined4 *)(puVar6 + 4) = 0x17020203;
      puVar6 = (undefined8 *)((long)puVar6 + 0x24);
    }
    if ((*(byte *)(param_1 + 0xa6) & 1) != 0) {
      if ((long)param_3 - (long)puVar6 < 5) {
        return (undefined8 *)0x0;
      }
      *(undefined4 *)puVar6 = 0x1000f00;
      if ((*(byte *)(param_1 + 0xa6) & 4) == 0) {
        *(undefined1 *)((long)puVar6 + 4) = 1;
        puVar6 = (undefined8 *)((long)puVar6 + 5);
      }
      else {
        *(undefined1 *)((long)puVar6 + 4) = 2;
        puVar6 = (undefined8 *)((long)puVar6 + 5);
      }
    }
    iVar3 = *(int *)(*(long *)(param_1 + 0x20) + 0x4a8);
    *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x4a8) = 0;
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*(long *)(param_1 + 0x5c) + 0x2b8);
      if ((pcVar2 != (code *)0x0) &&
         (iVar3 = (*pcVar2)(param_1,&local_40,&local_44,
                            *(undefined8 *)(*(long *)(param_1 + 0x5c) + 0x2c0)), iVar3 == 0)) {
        if ((long)((long)param_3 + (-4 - (long)puVar6)) < (long)(ulong)local_44) {
          return (undefined8 *)0x0;
        }
        *(undefined2 *)puVar6 = 0x7433;
        *(undefined1 *)((long)puVar6 + 2) = local_44._1_1_;
        *(undefined1 *)((long)puVar6 + 3) = (undefined1)local_44;
        _memcpy((undefined4 *)((long)puVar6 + 4),local_40,(ulong)local_44);
        puVar6 = (undefined8 *)((ulong)local_44 + 4 + (long)puVar6);
        *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x4a8) = 1;
      }
    }
    puVar1 = (undefined1 *)((long)puVar6 + (0xfffffffe - (long)param_2));
    if ((int)puVar1 != 0) {
      *(char *)param_2 = (char)((ulong)puVar1 >> 8);
      *(char *)((long)param_2 + 1) = (char)puVar1;
      param_2 = puVar6;
    }
  }
  else {
    iVar3 = FUN_100bf2210(param_1,0,&local_34,0);
    if (iVar3 == 0) {
      uVar7 = 0x2e1;
    }
    else {
      if ((long)((long)param_3 + (-4 - (long)puVar6)) < (long)local_34) {
        return (undefined8 *)0x0;
      }
      *(undefined1 *)puVar6 = 0xff;
      *(undefined1 *)((long)puVar5 + 3) = 1;
      *(char *)((long)puVar5 + 4) = (char)((uint)local_34 >> 8);
      *(char *)((long)puVar5 + 5) = (char)local_34;
      iVar3 = FUN_100bf2210(param_1,(undefined1 *)((long)puVar5 + 6),&local_34);
      if (iVar3 != 0) {
        puVar6 = (undefined8 *)((long)local_34 + 6 + (long)puVar5);
        goto LAB_100bd7f8a;
      }
      uVar7 = 0x2ec;
    }
LAB_100bd8021:
    FUN_100c62ee0(0x14,0x116,0x44,"t1_lib.c",uVar7);
    param_2 = (undefined8 *)0x0;
  }
  return param_2;
}

