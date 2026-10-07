
void FUN_100385130(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_100bbcfd8;
  (*DAT_1011c5b80)(1,param_1 + 7);
  (*DAT_1011c5b80)(1,(long)param_1 + 0x4c);
  (*DAT_1011c5b80)(1,param_1 + 0xc);
  (*DAT_1011c5b80)(1,(long)param_1 + 0x74);
  *param_1 = &PTR_FUN_100bbcf90;
  cVar1 = (*DAT_1011c6360)(*(undefined4 *)(param_1 + 2));
  if (cVar1 != '\0') {
    (*DAT_1011c5738)(0x8d40,*(undefined4 *)(param_1 + 2));
    (*DAT_1011c5de8)(0x8d40,0x8d00,0xde1,0,0);
    (*DAT_1011c5de8)(0x8d40,0x8d20,0xde1,0,0);
                    /* WARNING: Could not recover jumptable at 0x000100385205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c5b20)(1,param_1 + 2);
    return;
  }
  return;
}

