#include <gtest/gtest.h>
#include "media/pianoroll/AudioDisplayComponent.h"

// example test of the supported extensions list in main/src/media/pianoroll/AudioDisplayComponent.cpp
TEST(AudioDisplayComponentTest, SupportedExtensionsAreCorrect)
{
    AudioDisplayComponent comp;
    auto exts = comp.getSupportedExtensions();

    // Expected list
    StringArray expected {
        ".wav", ".bwf", ".aiff", ".aif", ".flac", ".ogg", ".mp3"
    };

    // Same number of items
    EXPECT_EQ(exts.size(), expected.size());

    // Check each expected extension is present
    for (auto& ext : expected)
        EXPECT_TRUE(exts.contains(ext));
}
