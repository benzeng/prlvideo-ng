
CVmConfiguration * FUN_100acdff0(CVmConfiguration *param_1,CVmConfiguration *param_2)

{
  if (param_2 == (CVmConfiguration *)0x0) {
    CVmConfiguration::CVmConfiguration(param_1);
  }
  else {
    CVmConfiguration::CVmConfiguration(param_1,param_2);
  }
  return param_1;
}

