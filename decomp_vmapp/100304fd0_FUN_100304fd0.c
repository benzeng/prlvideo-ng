
void FUN_100304fd0(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  if (param_6 - 0x1800U < 3) {
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xd16,&local_4c);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xd17,&local_50);
    (*(code *)DAT_1011c4a88[0x68])(*DAT_1011c4a88,0xb07,&local_48);
    (*DAT_1011c57c8)(param_2,param_3,param_4 + param_2,param_5 + param_3,(int)local_48,(int)local_44
                     ,(int)((float)param_4 * local_4c + local_48),
                     (int)((float)param_5 * local_50 + local_44),0x4000,0x2600);
    lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

