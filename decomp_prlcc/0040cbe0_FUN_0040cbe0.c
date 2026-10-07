
void FUN_0040cbe0(long *param_1,int param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  __uid_t _Var5;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  _Var5 = getuid();
  if (*(undefined8 **)(lVar1 + 0x968) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x968))(lVar1);
  }
  puVar4 = PTR_prl_xfunctions_0061bd60;
  if (*(ulong *)(lVar1 + 0xb8) < *(long *)(lVar1 + 0xb0) + 0xcU) {
    (**(code **)(PTR_prl_xfunctions_0061bd60 + 0xf8))(lVar1);
  }
  puVar2 = *(undefined1 **)(lVar1 + 0xb0);
  *(undefined1 **)(lVar1 + 0xa0) = puVar2;
  *puVar2 = 0x19;
  *(undefined2 *)(puVar2 + 2) = 3;
  *(long *)(lVar1 + 0xb0) = *(long *)(lVar1 + 0xb0) + 0xc;
  *(long *)(lVar1 + 0x98) = *(long *)(lVar1 + 0x98) + 1;
  *puVar2 = (char)(int)lVar3;
  puVar2[1] = 0x19;
  *(__uid_t *)(puVar2 + 4) = _Var5;
  *(uint *)(puVar2 + 8) = (uint)(param_2 != 0);
  (**(code **)(puVar4 + 0xf8))(lVar1);
  if (*(long *)(lVar1 + 0x968) != 0) {
    (**(code **)(*(long *)(lVar1 + 0x968) + 8))(lVar1);
  }
  if (*(code **)(lVar1 + 0xd0) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040ccc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0xd0))(lVar1);
  return;
}

