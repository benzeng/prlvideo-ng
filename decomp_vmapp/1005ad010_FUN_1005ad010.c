
void FUN_1005ad010(undefined8 *param_1,ulong *param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = (ulong *)FUN_10070ade0();
  if (puVar2 != (ulong *)0x0) {
    iVar1 = *(int *)(param_1 + 0x19);
    uVar4 = (ulong)*(uint *)((long)param_1 + 0xcc);
    uVar3 = (uVar4 - 1) + (ulong)(uint)((int)param_2[7] * iVar1) + param_1[0x218];
    *puVar2 = uVar3 / uVar4;
    *(undefined4 *)((long)puVar2 + 0x54) = 1;
    *(int *)(puVar2 + 10) = iVar1;
    puVar2[0xb] = *param_2;
    *(int *)(puVar2 + 0xc) = iVar1;
    puVar2[2] = (ulong)param_2;
    puVar2[3] = (ulong)param_1;
    puVar2[9] = (ulong)FUN_1005b0970;
    uVar3 = (**(code **)(**(long **)*param_1 + 0x250))(*(long **)*param_1,uVar4,uVar3 % uVar4);
    puVar2[6] = uVar3;
    FUN_100708190(param_1 + 5,puVar2);
    return;
  }
  FUN_1008e3970("","vdisk",0,"No memory for dio");
  FUN_1005aca50(*param_1,param_2,param_2[4] + 0x40,0x80000002);
  return;
}

