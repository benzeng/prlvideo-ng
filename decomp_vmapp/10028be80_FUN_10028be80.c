
void FUN_10028be80(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(*(long *)(param_2 + 0x88) + 0x17) & 0xf;
  if (bVar3 == 0xf) {
    FUN_10028cdd0(param_2);
    return;
  }
  if ((bVar3 < 0xc) && ((0x21bUL >> (ulong)bVar3 & 1) != 0)) {
    (*(code *)(&PTR_FUN_100bb0f20)[bVar3])(param_2);
  }
  else {
    FUN_1008e3970("","LocalDevices",0,"LSI: unsupported page type: %d");
    puVar1 = *(undefined8 **)(param_2 + 0x88);
    *(undefined8 *)(param_2 + 0x18) = puVar1[2];
    uVar2 = *puVar1;
    *(undefined8 *)(param_2 + 0x10) = puVar1[1];
    *(undefined8 *)(param_2 + 8) = uVar2;
    *(undefined1 *)(param_2 + 0x1d) = 0;
    *(undefined2 *)(param_2 + 0x16) = 7;
    *(undefined1 *)(param_2 + 10) = 6;
  }
  *(undefined2 *)(param_2 + 0x16) = 0;
  *(undefined1 *)(param_2 + 10) = 6;
  return;
}

