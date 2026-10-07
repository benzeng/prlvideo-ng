
void FUN_100276910(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  if ((lVar1 != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x160) + 0xb4), lVar2 != *(long *)(lVar1 + 0xf0))) {
    *(long *)(lVar1 + 0xf0) = lVar2;
    FUN_10025b2f0(param_1 + 0x68,2);
  }
  lVar1 = *(long *)(param_1 + 200);
  if ((lVar1 != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x160) + 0xbc), lVar2 != *(long *)(lVar1 + 0xf0))) {
    *(long *)(lVar1 + 0xf0) = lVar2;
    FUN_10025b2f0(param_1 + 0x68,1);
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0xc4);
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0xcc);
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0xe0) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0xd4);
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0xdc);
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0xf0) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0xe4);
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0xf8) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0xec);
  }
  if (*(long *)(param_1 + 0x100) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x100) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0xf4);
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x108) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0x124);
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x110) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 300);
  }
  if (*(long *)(param_1 + 0x118) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x118) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0x134);
  }
  if (*(long *)(param_1 + 0x120) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x120) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0x13c);
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x128) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0xfc);
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x130) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0x104);
  }
  if (*(long *)(param_1 + 0x138) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x138) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0x10c);
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x140) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0x114);
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x148) + 0xf0) =
         *(undefined8 *)(*(long *)(param_1 + 0x160) + 0x11c);
  }
  return;
}

