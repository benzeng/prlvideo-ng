
void FUN_10036c110(undefined8 param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  
  if (6 < param_3 - 1U) {
    return;
  }
  pcVar1 = " < ";
  switch(param_3) {
  case 1:
    FUN_10038e8e0(param_1,"discard;\n",
                  (long)&switchD_10036c135::switchdataD_10036c184 +
                  (long)(int)(&switchD_10036c135::switchdataD_10036c184)[param_3 - 1U]," < ");
    return;
  case 3:
    pcVar1 = " == ";
    break;
  case 4:
    pcVar1 = " <= ";
    break;
  case 5:
    pcVar1 = " > ";
    break;
  case 6:
    pcVar1 = " != ";
    break;
  case 7:
    pcVar1 = " >= ";
  }
  FUN_10038e8e0(param_1,"if (!(ceil(%s.a * 255.0) %s c_ps[OFF_ALPHAREF].x)) discard;\n",param_2,
                pcVar1);
  return;
}

