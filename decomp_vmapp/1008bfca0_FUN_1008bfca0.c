
void FUN_1008bfca0(void)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((&DAT_1011b1190 + lVar1 != (undefined *)0x0) &&
       ((*(uint *)((long)&DAT_1011b1194 + lVar1) & 1) != 0)) {
      if ((*(uint *)((long)&DAT_1011b1194 + lVar1) & 2) != 0) {
        FUN_10081e1a0(*(undefined8 *)((long)&PTR_s_compatible_1011b11a0 + lVar1));
      }
      FUN_10081e1a0(&DAT_1011b1190 + lVar1);
    }
    lVar1 = lVar1 + 0x28;
  } while (lVar1 != 0x140);
  FUN_100885590(DAT_1011c29f8,FUN_1008bfd20);
  DAT_1011c29f8 = 0;
  return;
}

