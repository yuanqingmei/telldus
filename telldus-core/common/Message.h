#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>

namespace TelldusCore {
        class Message : public std::wstring {
        public:
                Message();
                Message(const std::wstring &);
                ~Message(void);
       
                void addArgument(const std::wstring &);
                void addArgument(int);
                //void addArgument(const char *);
       
                static bool nextIsInt(const std::wstring &);
                static bool nextIsString(const std::wstring &);

                static std::wstring takeString(std::wstring *);
                static int takeInt(std::wstring *);
		
		private:
				static int wideToInteger(const std::wstring &input);
        };
}

#endif //MESSAGE_H