
ushort * FUN_1002eccc0(undefined8 *param_1,undefined1 param_2,undefined1 param_3,ushort param_4)

{
  int iVar1;
  ushort uVar2;
  ushort *puVar3;
  long lVar4;
  ushort *puVar5;
  ushort uVar6;
  
  uVar6 = param_4 + 4;
  uVar2 = *(ushort *)((long)param_1 + 0x16);
  iVar1 = uVar6 + 4;
  lVar4 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0x82,uVar6 + 8,FUN_1002df330,0);
  if (lVar4 == 0) {
    puVar5 = (ushort *)0x0;
    if (-1 < DAT_1011c568c) {
      puVar5 = (ushort *)0x0;
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[ACL-U]-Can\'t alloc frame (handle:%04x, len:%d)",uVar2,
                    iVar1);
    }
  }
  else {
    puVar3 = *(ushort **)(lVar4 + 0x10);
    *puVar3 = uVar2 & 0xfff | 0x2000;
    puVar3[1] = (ushort)iVar1;
    puVar5 = (ushort *)0x0;
    if (puVar3 != (ushort *)0x0) {
      puVar3[3] = 1;
      puVar3[2] = uVar6;
      *(undefined1 *)(puVar3 + 4) = param_2;
      *(undefined1 *)((long)puVar3 + 9) = param_3;
      puVar3[5] = param_4;
      puVar5 = puVar3;
    }
  }
  return puVar5;
}

