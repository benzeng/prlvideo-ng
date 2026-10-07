
undefined8 FUN_1002eda20(undefined8 *param_1,long param_2,ushort param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 9);
  uVar2 = *(ushort *)((long)param_1 + 0x16);
  lVar4 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0x82,0xe,FUN_1002df330,0);
  if (lVar4 == 0) {
    uVar5 = 0x20;
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[ACL-U]-Can\'t alloc frame (handle:%04x, len:%d)",uVar2,
                    10);
    }
  }
  else {
    puVar3 = *(ushort **)(lVar4 + 0x10);
    *puVar3 = uVar2 & 0xfff | 0x2000;
    puVar3[1] = 10;
    uVar5 = 0x20;
    if (puVar3 != (ushort *)0x0) {
      puVar3[3] = 1;
      puVar3[2] = 6;
      *(undefined1 *)(puVar3 + 4) = 1;
      *(undefined1 *)((long)puVar3 + 9) = uVar1;
      puVar3[5] = 2;
      puVar3[6] = param_3;
      FUN_1002edbe0(param_1,puVar3,"Rejected!");
      uVar5 = 0;
    }
  }
  return uVar5;
}

