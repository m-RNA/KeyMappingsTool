#ifndef BTNTRIGGERTYPEENUM_H
#define BTNTRIGGERTYPEENUM_H

#include<string>
#include<map>

// 按键触发模式枚举
enum TriggerTypeEnum {
    Normal = 0,// 正常同步模式
    Delay1s = 1,// 延迟1秒触发
    Delay3s = 2,// 延迟3秒触发
    Delay5s = 3,// 延迟5秒触发
    Release = 4,// 按键松开时触发
    PressAndRelease = 5,// 按下触发并且松开时再次触发

    End //结束标识, 用于遍历枚举
};

// 枚举对应信息map
extern std::map<TriggerTypeEnum, std::string> TRIGGER_TYPE_ENUM_MAP;

#endif // BTNTRIGGERTYPEENUM_H
