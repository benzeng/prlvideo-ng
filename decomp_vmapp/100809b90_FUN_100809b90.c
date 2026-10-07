
void FUN_100809b90(long param_1,ulong param_2)

{
  short *psVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar2 = *(long *)(param_1 + 0x80);
  if ((param_2 & 1) == 0) {
    puVar4 = (undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x236) = *(undefined8 *)(lVar2 + 0x58);
    psVar1 = (short *)(*(long *)(param_1 + 0x88) + 0x20a);
    *psVar1 = *psVar1 + 1;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x88);
    *(short *)(lVar3 + 0x208) = *(short *)(lVar3 + 0x208) + 1;
    puVar4 = (undefined8 *)(lVar2 + 0xc);
    *(undefined8 *)(lVar3 + 0x218) = *(undefined8 *)(lVar3 + 0x228);
    *(undefined8 *)(lVar3 + 0x210) = *(undefined8 *)(lVar3 + 0x220);
    lVar2 = *(long *)(param_1 + 0x88);
    *(undefined8 *)(lVar2 + 0x228) = 0;
    *(undefined8 *)(lVar2 + 0x220) = 0;
  }
  *puVar4 = 0;
  return;
}

