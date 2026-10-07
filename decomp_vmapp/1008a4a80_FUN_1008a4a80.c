
void FUN_1008a4a80(undefined8 *param_1,ushort *param_2)

{
  char *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  
LAB_1008a4a90:
  if ((*param_2 & 0x306) == 0) {
    pcVar1 = *(char **)(param_2 + 0x10);
    switch(*pcVar1) {
    case '\0':
      goto switchD_1008a4aad_caseD_0;
    case '\x01':
    case '\x02':
    case '\x03':
    case '\x06':
      break;
    case '\x04':
      if ((*(long *)(pcVar1 + 0x20) != 0) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar1 + 0x20) + 0x18),
         UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001008a4ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      break;
    case '\x05':
      if (pcVar1 == (char *)0x0) break;
      if (*(long *)(pcVar1 + 0x20) == 0) goto LAB_1008a4afc;
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar1 + 0x20) + 0x20);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001008a4afa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      break;
    default:
      goto switchD_1008a4aad_default;
    }
  }
  goto switchD_1008a4aad_caseD_1;
switchD_1008a4aad_caseD_0:
  param_2 = *(ushort **)(pcVar1 + 0x10);
  if (param_2 == (ushort *)0x0) {
    if (*(long *)(pcVar1 + 0x20) == 0) {
LAB_1008a4afc:
      if ((*pcVar1 != '\x05') && (*(int *)(pcVar1 + 8) == 1)) {
        *(undefined4 *)param_1 = *(undefined4 *)(pcVar1 + 0x28);
        return;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar1 + 0x20) + 0x20);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001008a4acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
switchD_1008a4aad_caseD_1:
    *param_1 = 0;
switchD_1008a4aad_default:
    return;
  }
  goto LAB_1008a4a90;
}

