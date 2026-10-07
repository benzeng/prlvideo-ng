
void FUN_1000ef230(undefined4 *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  
  if (*(char *)((long)param_1 + 0x11) == '\0') {
    pcVar1 = "no brand string";
  }
  else {
    pcVar1 = (char *)((long)param_1 + 0x11);
  }
  _snprintf(param_2,(long)param_3,
            "%s %02X%X%X [%s] (id=%u) max(%u, 0x%x) 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x, 0x%x"
            ,param_1 + 1,(ulong)*(uint *)((long)param_1 + 0x8a),
            (ulong)*(uint *)((long)param_1 + 0x8e),*(uint *)((long)param_1 + 0x42) & 0xf,pcVar1,
            *(undefined4 *)((long)param_1 + 0x86),*param_1,*(undefined4 *)((long)param_1 + 0x62),
            *(undefined4 *)((long)param_1 + 0x4e),*(undefined4 *)((long)param_1 + 0x4a),
            *(undefined4 *)((long)param_1 + 0x66),*(undefined4 *)((long)param_1 + 0x6a),
            *(undefined4 *)((long)param_1 + 0x6e),*(undefined4 *)((long)param_1 + 0x72),
            *(undefined4 *)((long)param_1 + 0x7a),*(undefined4 *)((long)param_1 + 0x76),
            *(undefined4 *)((long)param_1 + 0x82));
  return;
}

