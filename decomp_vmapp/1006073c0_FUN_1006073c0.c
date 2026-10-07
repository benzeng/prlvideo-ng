
void FUN_1006073c0(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar1 = param_2[1];
  param_1[1] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  *(char *)(param_1 + 2) = (char)param_2[2];
  *(undefined1 *)((long)param_1 + 9) = *(undefined1 *)((long)param_2 + 9);
  *(ushort *)((long)param_1 + 10) =
       CONCAT11((char)*(undefined2 *)((long)param_2 + 10),
                (char)((ushort)*(undefined2 *)((long)param_2 + 10) >> 8));
  *(ushort *)(param_1 + 3) =
       CONCAT11((char)(short)param_2[3],(char)((ushort)(short)param_2[3] >> 8));
  return;
}

