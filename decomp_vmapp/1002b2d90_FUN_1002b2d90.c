
void FUN_1002b2d90(long param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  byte param_5)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(DAT_1011c3698 + 0x1938);
  uVar1 = *(uint *)(lVar2 + 0x2f32c);
  if (0x100 - (uVar1 - *(int *)(lVar2 + 0x2f328) & 0xff) < 4) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",1,"[%s] Mouse buffer full (guest hang?)",
                    *(undefined8 *)(param_1 + 0xc0));
      return;
    }
  }
  else {
    *(byte *)(lVar2 + 0x2f228 + (ulong)uVar1) = param_5 | 8;
    *(undefined1 *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x2f228 + (ulong)(uVar1 + 1 & 0xff)) =
         param_2;
    *(undefined1 *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x2f228 + (ulong)(uVar1 + 2 & 0xff)) =
         param_3;
    *(undefined1 *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x2f228 + (ulong)(uVar1 + 3 & 0xff)) =
         param_4;
    *(uint *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x2f32c) = uVar1 + 4 & 0xff;
  }
  return;
}

