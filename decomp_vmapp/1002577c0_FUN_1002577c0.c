
undefined8 FUN_1002577c0(void)

{
  int iVar1;
  pthread_t p_Var2;
  int local_c;
  
  local_c = 0;
  p_Var2 = _pthread_self();
  iVar1 = _pthread_get_qos_class_np(p_Var2,&local_c,0);
  if ((iVar1 != 0) || (local_c == 0)) {
    FUN_1008e3970("","LocalDevices",0,
                  "Failed to get thread QoS class: was thread priority API used?");
  }
  if (local_c < 0x19) {
    if (local_c == 9) {
      return 0;
    }
    if (local_c == 0x11) {
      return 1;
    }
  }
  else {
    if (local_c == 0x19) {
      return 5;
    }
    if (local_c == 0x21) {
      return 6;
    }
  }
  return 3;
}

