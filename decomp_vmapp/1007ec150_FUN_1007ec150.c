
undefined8 FUN_1007ec150(int *param_1,undefined2 *param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_38;
  int *local_30;
  undefined8 local_28;
  
  local_30 = (int *)0x0;
  local_28 = param_3;
  local_30 = (int *)FUN_100819430(&local_30,&local_28,*param_2);
  if (local_30 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    if (param_4 == '\0') {
      *param_1 = *local_30;
    }
    else {
      *local_30 = *param_1;
    }
    param_1[0x11] = 0;
    param_1[0x12] = 3;
    FUN_1008143a0(param_1,local_30);
    FUN_100813340(local_30);
    uVar1 = (*(int **)(param_1 + 0x4c))[0x3a];
    local_38 = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 << 0x18);
    lVar3 = (long)&local_38 + 1;
    if (2 < **(int **)(param_1 + 0x4c) >> 8) {
      lVar3 = (long)&local_38 + 2;
    }
    uVar2 = (**(code **)(*(long *)(param_1 + 2) + 0x90))(lVar3);
    *(undefined8 *)(*(long *)(param_1 + 0x4c) + 0xe0) = uVar2;
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(lVar3 + 0x3a8) = uVar2;
    if (*param_1 == 0xfeff) {
      FUN_1007fe8e0(param_1);
      lVar3 = *(long *)(param_1 + 0x20);
    }
    *(undefined8 *)(lVar3 + 0xbc) = *(undefined8 *)(param_2 + 0xd);
    *(undefined8 *)(lVar3 + 0xb4) = *(undefined8 *)(param_2 + 9);
    uVar2 = *(undefined8 *)(param_2 + 1);
    *(undefined8 *)(lVar3 + 0xac) = *(undefined8 *)(param_2 + 5);
    *(undefined8 *)(lVar3 + 0xa4) = uVar2;
    lVar3 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(lVar3 + 0xdc) = *(undefined8 *)(param_2 + 0x1d);
    *(undefined8 *)(lVar3 + 0xd4) = *(undefined8 *)(param_2 + 0x19);
    uVar2 = *(undefined8 *)(param_2 + 0x11);
    *(undefined8 *)(lVar3 + 0xcc) = *(undefined8 *)(param_2 + 0x15);
    *(undefined8 *)(lVar3 + 0xc4) = uVar2;
    (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x10))(param_1);
    lVar3 = *(long *)(param_1 + 2);
    if (param_1[0xe] == 0) {
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar3 + 0x28);
      (**(code **)(*(long *)(lVar3 + 200) + 0x20))(param_1,0x12);
      (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x20))(param_1,0x11);
      uVar2 = 1;
    }
    else {
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar3 + 0x20);
      (**(code **)(*(long *)(lVar3 + 200) + 0x20))(param_1,0x22);
      (**(code **)(*(long *)(*(long *)(param_1 + 2) + 200) + 0x20))(param_1,0x21);
      uVar2 = 2;
    }
    FUN_100810bc0(param_1,uVar2);
    uVar2 = 1;
  }
  return uVar2;
}

