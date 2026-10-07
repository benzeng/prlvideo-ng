
void FUN_10036bfb0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  char *pcVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = 0;
    do {
      pcVar1 = "if(";
      if (iVar2 != 0) {
        pcVar1 = " || ";
      }
      FUN_10038e8e0(param_2,"%s(dot(c_ps[OFF_CLIP_PLANE + %u], v_clipVertex) < 0.0)",pcVar1,iVar2);
      iVar2 = iVar2 + 1;
    } while (param_3 != iVar2);
    FUN_10038e8e0(param_1,"%s vec4 v_clipVertex; \n\n",param_4);
    FUN_10038e8e0(param_2,") discard; \n");
    return;
  }
  return;
}

