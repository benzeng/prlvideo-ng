
void FUN_0040c1e0(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  if (*(undefined8 **)(lVar1 + 0x968) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x968))(lVar1);
  }
  puVar4 = PTR_prl_xfunctions_0061bd60;
  if (*(ulong *)(lVar1 + 0xb8) < *(long *)(lVar1 + 0xb0) + 0xcU) {
    (**(code **)(PTR_prl_xfunctions_0061bd60 + 0xf8))(lVar1);
  }
  puVar2 = *(undefined1 **)(lVar1 + 0xb0);
  *(undefined1 **)(lVar1 + 0xa0) = puVar2;
  *puVar2 = 1;
  *(undefined2 *)(puVar2 + 2) = 3;
  *(long *)(lVar1 + 0xb0) = *(long *)(lVar1 + 0xb0) + 0xc;
  *(long *)(lVar1 + 0x98) = *(long *)(lVar1 + 0x98) + 1;
  *puVar2 = (char)(int)lVar3;
  puVar2[1] = 1;
  *(undefined4 *)(puVar2 + 4) = param_2;
  *(undefined4 *)(puVar2 + 8) = param_3;
  (**(code **)(puVar4 + 0xf8))(lVar1);
  if (*(long *)(lVar1 + 0x968) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040c2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x968) + 8))(lVar1);
  return;
}

