
ushort * FUN_1002eb7b0(long *param_1,ushort param_2,int param_3)

{
  long lVar1;
  ushort *puVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x60))(param_1,0x82,param_3 + 4,FUN_1002df330,0);
  if (lVar1 == 0) {
    puVar2 = (ushort *)0x0;
    if (-1 < DAT_1011c568c) {
      puVar2 = (ushort *)0x0;
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[ACL-U]-Can\'t alloc frame (handle:%04x, len:%d)",
                    param_2,param_3);
    }
  }
  else {
    puVar2 = *(ushort **)(lVar1 + 0x10);
    *puVar2 = param_2 & 0xfff | 0x2000;
    puVar2[1] = (ushort)param_3;
  }
  return puVar2;
}

