
int FUN_100237d2d(undefined8 param_1,int *param_2,int param_3)

{
  int *local_28;
  int local_c;
  
  local_c = 0;
  for (local_28 = param_2; (local_c == 0 && (local_28 != (int *)0x0));
      local_28 = *(int **)(local_28 + 0x10)) {
    if ((*local_28 == 0xb) || (*local_28 == 0xd)) {
      if ((short)local_28[0x18] == -1) {
        *(short *)(local_28 + 0x18) = (short)param_3;
        local_c = FUN_100237d2d(param_1,*(undefined8 *)(local_28 + 0xc),param_3);
        *(undefined2 *)(local_28 + 0x18) = 0xfffe;
      }
      else if ((short)local_28[0x18] == param_3) {
        FUN_10022d5a6(param_1,*(undefined8 *)(local_28 + 2),1099,
                      "Detected a cycle in %s references\n",*(undefined8 *)(local_28 + 4),0);
        return -1;
      }
    }
    else if (*local_28 == 4) {
      local_c = FUN_100237d2d(param_1,*(undefined8 *)(local_28 + 0xc),param_3 + 1);
    }
    else {
      local_c = FUN_100237d2d(param_1,*(undefined8 *)(local_28 + 0xc),param_3);
    }
  }
  return local_c;
}

