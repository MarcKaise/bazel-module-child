#include <gtest/gtest.h>
#include <gtest/internal/gtest-port.h>

#include "helloen.h"

TEST(TestCase, test1) {
    HelloEn he;

    // 標準出力キャプチャ
    testing::internal::CaptureStdout();

    // メッセージ出力
    he.hello();

    // 標準出力キャプチャ終了とテスト
    ASSERT_STREQ("Hello!\n", testing::internal::GetCapturedStdout().c_str());
}
