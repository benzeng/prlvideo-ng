
undefined8 FUN_1002ed880(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ushort *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[C-FRAME]+CMD(info_type:%d) %s",
                  *(undefined2 *)(param_2 + 0xc),"Information Request");
  }
  if (2 < (ushort)(*(short *)(param_2 + 0xc) - 1U)) {
    uVar5 = FUN_1002eda20(param_1,param_2,0);
    return uVar5;
  }
  uVar2 = *(undefined1 *)(param_2 + 9);
  iVar7 = 1 << ((byte)*(short *)(param_2 + 0xc) & 0x1f);
  uVar1 = iVar7 + 8;
  uVar4 = *(ushort *)((long)param_1 + 0x16);
  iVar8 = (uVar1 & 0xffff) + 4;
  lVar6 = (**(code **)(*(long *)*param_1 + 0x60))
                    ((long *)*param_1,0x82,(uVar1 & 0xffff) + 8,FUN_1002df330,0);
  if (lVar6 == 0) {
    uVar5 = 0x20;
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[ACL-U]-Can\'t alloc frame (handle:%04x, len:%d)",uVar4,
                    iVar8);
    }
  }
  else {
    puVar3 = *(ushort **)(lVar6 + 0x10);
    *puVar3 = uVar4 & 0xfff | 0x2000;
    puVar3[1] = (ushort)iVar8;
    uVar5 = 0x20;
    if (puVar3 != (ushort *)0x0) {
      puVar3[3] = 1;
      puVar3[2] = (ushort)uVar1;
      *(undefined1 *)(puVar3 + 4) = 0xb;
      *(undefined1 *)((long)puVar3 + 9) = uVar2;
      puVar3[5] = (short)iVar7 + 4;
      uVar4 = *(ushort *)(param_2 + 0xc);
      if (uVar4 == 3) {
        puVar3[8] = 6;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0;
      }
      else if (uVar4 == 2) {
        puVar3[8] = 0x280;
        puVar3[9] = 0;
      }
      else if (uVar4 == 1) {
        puVar3[8] = 0x30;
        uVar4 = *(ushort *)(param_2 + 0xc);
      }
      puVar3[6] = uVar4;
      puVar3[7] = 0;
      FUN_1002edbe0(param_1,puVar3,"Information Success");
      uVar5 = 0;
    }
  }
  return uVar5;
}

