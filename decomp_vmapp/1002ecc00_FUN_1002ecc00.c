
ushort * FUN_1002ecc00(undefined8 *param_1,ushort param_2,int param_3)

{
  ushort uVar1;
  long lVar2;
  ushort *puVar3;
  
  uVar1 = *(ushort *)((long)param_1 + 0x16);
  lVar2 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0x82,param_3 + 8,FUN_1002df330,0)
  ;
  if (lVar2 == 0) {
    puVar3 = (ushort *)0x0;
    if (-1 < DAT_1011c568c) {
      puVar3 = (ushort *)0x0;
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[ACL-U]-Can\'t alloc frame (handle:%04x, len:%d)",uVar1,
                    param_3 + 4);
    }
  }
  else {
    puVar3 = *(ushort **)(lVar2 + 0x10);
    *puVar3 = uVar1 & 0xfff | 0x2000;
    puVar3[1] = (ushort)(param_3 + 4);
    if (puVar3 != (ushort *)0x0) {
      puVar3[3] = param_2;
      puVar3[2] = (ushort)param_3;
    }
  }
  return puVar3;
}

