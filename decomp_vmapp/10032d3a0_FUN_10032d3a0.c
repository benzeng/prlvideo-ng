
void FUN_10032d3a0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 local_1c;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    UNRECOVERED_JUMPTABLE_00 = (code *)DAT_1011c4a88[0x14f];
    break;
  case 1:
    UNRECOVERED_JUMPTABLE_00 = (code *)DAT_1011c4a88[0x236];
    break;
  case 2:
    UNRECOVERED_JUMPTABLE_00 = (code *)DAT_1011c4a88[0xbd];
    goto LAB_10032d4e2;
  case 3:
                    /* WARNING: Could not recover jumptable at 0x00010032d48e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)DAT_1011c4a88[0x34])
              (*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),0,
               **(undefined8 **)(param_1 + 0x10));
    return;
  case 4:
    UNRECOVERED_JUMPTABLE_00 = (code *)DAT_1011c4a88[0x193];
    break;
  case 5:
    UNRECOVERED_JUMPTABLE_00 = (code *)DAT_1011c4a88[0x225];
    goto LAB_10032d4e2;
  case 6:
    UNRECOVERED_JUMPTABLE_00 = (code *)DAT_1011c4a88[0x83];
LAB_10032d4e2:
                    /* WARNING: Could not recover jumptable at 0x00010032d4f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)
              (*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x20),0,**(undefined8 **)(param_1 + 0x10),
               UNRECOVERED_JUMPTABLE_00);
    return;
  case 7:
                    /* WARNING: Could not recover jumptable at 0x00010032d521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)DAT_1011c4a88[0x47])
              (*DAT_1011c4a88,0,**(undefined8 **)(param_1 + 0x10),(code *)DAT_1011c4a88[0x47]);
    return;
  default:
    (*(code *)DAT_1011c4a88[0x69])(*DAT_1011c4a88,0x84e1,&local_1c);
    (*(code *)DAT_1011c4a88[0x156])(*DAT_1011c4a88,*(int *)(param_1 + 8) + 0x84b8);
    (*(code *)DAT_1011c4a88[0x122])
              (*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),0,
               **(undefined8 **)(param_1 + 0x10));
    (*(code *)DAT_1011c4a88[0x156])(*DAT_1011c4a88,local_1c);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010032d4bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)
            (*DAT_1011c4a88,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),0,
             **(undefined8 **)(param_1 + 0x10),UNRECOVERED_JUMPTABLE_00);
  return;
}

