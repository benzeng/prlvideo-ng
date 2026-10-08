
int FUN_1008acdb6(int *param_1,char *param_2,int param_3)

{
  int local_220;
  int local_21c;
  xmlChar local_208 [504];
  int *local_10;
  
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) || (param_2 == (char *)0x0)) {
    local_220 = -1;
  }
  else {
    local_21c = param_3;
    if (0 < param_3) {
      local_10 = param_1;
      if (*param_1 < 1) {
        local_21c = _xmlOutputBufferWrite(*(xmlOutputBufferPtr *)(param_1 + 4),param_3,param_2);
      }
      else {
        local_21c = FUN_1008ac84c(*(undefined8 *)(param_1 + 4),param_2,param_3);
      }
      if (local_21c < 0) {
        _xmlStrPrintf(local_208,500,(xmlChar *)"xmlIOHTTPWrite:  %s\n%s \'%s\'.\n",
                      "Error appending to internal buffer.","Error sending document to URI",
                      *(undefined8 *)(local_10 + 2));
        FUN_1008ab73e(0x60a,local_208);
      }
    }
    local_220 = local_21c;
  }
  return local_220;
}

