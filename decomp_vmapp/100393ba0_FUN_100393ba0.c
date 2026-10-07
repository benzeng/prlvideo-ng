
undefined8 FUN_100393ba0(long param_1)

{
  if (*(char *)(param_1 + 0x44) != '\0') {
    *(undefined1 *)(param_1 + 0x44) = 0;
    if (*(char *)(DAT_1011c8478 + 0x37) == '\0') {
      if (*(char *)(param_1 + 0x50) != '\0') {
        FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"v_clipVertex = gl_Position;\n");
      }
      FUN_10036bf50(*(undefined8 *)(param_1 + 0x28),"gl_Position");
    }
    else {
      FUN_10036bf50(*(undefined8 *)(param_1 + 0x28),"gl_Position");
      FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"gl_ClipVertex = gl_Position;\n");
    }
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x28),"}\n");
  return 0;
}

