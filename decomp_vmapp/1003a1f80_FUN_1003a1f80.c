
void FUN_1003a1f80(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = param_3 >> 8 & 0x18 | param_3 >> 0x1c & 7;
  if (uVar1 < 0x14) {
    if ((0xc0005U >> uVar1 & 1) == 0) {
      if ((0x28210U >> uVar1 & 1) != 0) {
        return;
      }
      if ((uVar1 != 3) || ((*(uint *)**(undefined8 **)(param_1 + 8) & 0xffff0000) != 0xfffe0000))
      goto LAB_1003a1fdb;
    }
    pcVar2 = "%d";
  }
  else {
LAB_1003a1fdb:
    pcVar2 = "[%d]";
  }
  FUN_10038e8e0(param_2,pcVar2,param_3 & 0x7ff);
  return;
}

