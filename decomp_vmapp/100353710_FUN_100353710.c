
undefined8 FUN_100353710(long *param_1)

{
  if (**(uint **)param_1[7] < 0xffff0200) {
    FUN_100353770(param_1);
    FUN_10038e8e0(param_1[6],"ps_out0 = r0;\n}\n");
  }
  else if (*(char *)((long)param_1 + 0x6c) != '\0') {
    (**(code **)(*param_1 + 0x28))(param_1,0x1c,0,0);
  }
  return 0;
}

