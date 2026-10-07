
bool FUN_0040c4d0(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  undefined1 auStack_38 [8];
  int local_30;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  if (*(undefined8 **)(lVar1 + 0x968) != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)(lVar1 + 0x968))(lVar1);
  }
  puVar4 = PTR_prl_xfunctions_0061bd60;
  if (*(ulong *)(lVar1 + 0xb8) < *(long *)(lVar1 + 0xb0) + 0x10U) {
    (**(code **)(PTR_prl_xfunctions_0061bd60 + 0xf8))(lVar1);
  }
  puVar2 = *(undefined1 **)(lVar1 + 0xb0);
  *(undefined1 **)(lVar1 + 0xa0) = puVar2;
  *puVar2 = 0x24;
  *(undefined2 *)(puVar2 + 2) = 4;
  *(long *)(lVar1 + 0xb0) = *(long *)(lVar1 + 0xb0) + 0x10;
  *(long *)(lVar1 + 0x98) = *(long *)(lVar1 + 0x98) + 1;
  *puVar2 = (char)(int)lVar3;
  puVar2[1] = 0x24;
  iVar5 = (**(code **)(puVar4 + 0xf0))(lVar1,auStack_38,0,0);
  if (*(long *)(lVar1 + 0x968) != 0) {
    (**(code **)(*(long *)(lVar1 + 0x968) + 8))(lVar1);
  }
  return iVar5 != 0 && local_30 != 0;
}

