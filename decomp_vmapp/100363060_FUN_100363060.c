
void FUN_100363060(long *param_1,long param_2,long param_3,int param_4,uint param_5,int param_6)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_5;
  if ((**(byte **)(param_2 + 0x90) & 1) == 0) {
    (*DAT_1011c5708)(0x8f36,**(undefined4 **)(param_2 + 0x58));
    (*DAT_1011c5708)(0x8f37,**(undefined4 **)(param_3 + 0x58));
    (*DAT_1011c5a90)(0x8f36,0x8f37,param_4,uVar4,param_6);
    (*DAT_1011c5708)(0x8f36,0);
    (*DAT_1011c5708)(0x8f37,0);
    *(int *)(param_3 + 0x84) = *(int *)(param_3 + 0x84) + 1;
    FUN_10032f000(param_3 + 0x68,*(undefined8 *)(param_3 + 0x70));
    *(undefined8 *)(param_3 + 0x78) = 0;
    *(long *)(param_3 + 0x68) = param_3 + 0x70;
    *(undefined8 *)(param_3 + 0x70) = 0;
    if ((*(char *)(param_3 + 0xb4) != '\0') &&
       (lVar1 = *(long *)(param_3 + 0x40),
       (int)((ulong)(*(long *)(param_3 + 0x48) - lVar1) >> 3) != 0)) {
      uVar2 = 0;
      do {
        uVar3 = *(uint *)(&DAT_100b3ca14 + (ulong)*(uint *)(*(long *)(lVar1 + uVar2 * 8) + 0x1c) * 8
                         ) >> 0x18;
        (**(code **)(*(long *)param_1[5] + 0x18))
                  ((long *)param_1[5],param_3,uVar4 / uVar3,
                   (ulong)((param_5 - 1) + param_6 + uVar3) / (ulong)uVar3,uVar2 & 0xffffffff);
        lVar1 = *(long *)(param_3 + 0x40);
        uVar2 = uVar2 + 1;
      } while ((uint)uVar2 < (uint)((ulong)(*(long *)(param_3 + 0x48) - lVar1) >> 3));
    }
  }
  else {
    (**(code **)(*param_1 + 0x20))
              (param_1,param_3,param_4 + **(int **)(param_2 + 0x28),uVar4,param_6,0);
  }
  **(uint **)(param_3 + 0x90) = **(uint **)(param_3 + 0x90) & 0xfffffffe;
  return;
}

